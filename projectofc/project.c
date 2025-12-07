#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- Configuration ---
#define MAX_BUSES 10
#define MAX_SEATS 32

// --- Data Structures ---
struct Bus {
    int bus_id;
    char driver_name[50];
    char arrival_time[10];
    char departure_time[10];
    char from_dest[50];
    char to_dest[50];
    char seats[MAX_SEATS][50]; // Stores passenger names. "Empty" if available.
};

// --- Global Variables ---
struct Bus buses[MAX_BUSES];
int bus_count = 0;

// --- Function Prototypes ---
void displayMenu();
void addBus();
void showAvailableBuses();
void bookTicket();
void showBusStatus(int busIndex);
void initBus(int index);

// --- Main Function ---
int main() {
    int choice;
    
    // Pre-install one bus for testing purposes
    initBus(0);
    buses[0].bus_id = 101;
    strcpy(buses[0].driver_name, "John Doe");
    strcpy(buses[0].arrival_time, "09:00");
    strcpy(buses[0].departure_time, "09:30");
    strcpy(buses[0].from_dest, "New York");
    strcpy(buses[0].to_dest, "Washington");
    bus_count++;

    do {
        displayMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addBus();
                break;
            case 2:
                showAvailableBuses();
                break;
            case 3:
                bookTicket();
                break;
            case 4:
                printf("\nExiting system...\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}

// --- Function Definitions ---

void displayMenu() {
    printf("\n=================================\n");
    printf("   BUS RESERVATION SYSTEM\n");
    printf("=================================\n");
    printf("1. Admin: Add New Bus\n");
    printf("2. User: View Available Buses\n");
    printf("3. User: Book a Ticket\n");
    printf("4. Exit\n");
    printf("=================================\n");
}

void initBus(int index) {
    // Initialize all seats to "Empty"
    for(int i = 0; i < MAX_SEATS; i++) {
        strcpy(buses[index].seats[i], "Empty");
    }
}

void addBus() {
    if (bus_count >= MAX_BUSES) {
        printf("\nError: Maximum bus limit reached.\n");
        return;
    }

    struct Bus *b = &buses[bus_count];
    
    printf("\n--- Add New Bus ---\n");
    printf("Enter Bus ID (Number): ");
    scanf("%d", &b->bus_id);
    
    printf("Enter Driver Name: ");
    scanf("%s", b->driver_name); // Note: scanf stops at space. Use fgets for full names in complex apps.
    
    printf("Enter Arrival Time (e.g., 10:00): ");
    scanf("%s", b->arrival_time);
    
    printf("Enter Departure Time: ");
    scanf("%s", b->departure_time);
    
    printf("From: ");
    scanf("%s", b->from_dest);
    
    printf("To: ");
    scanf("%s", b->to_dest);

    initBus(bus_count);
    bus_count++;
    
    printf("\nBus added successfully!\n");
}

void showAvailableBuses() {
    if (bus_count == 0) {
        printf("\nNo buses available.\n");
        return;
    }

    printf("\n--- Available Buses ---\n");
    for(int i = 0; i < bus_count; i++) {
        printf("Bus ID: %d | Route: %s to %s | Driver: %s\n", 
               buses[i].bus_id, buses[i].from_dest, buses[i].to_dest, buses[i].driver_name);
    }
}

void showBusStatus(int busIndex) {
    printf("\n--- Seat Layout for Bus %d ---\n", buses[busIndex].bus_id);
    
    int seats_per_row = 4;
    
    for(int i = 0; i < MAX_SEATS; i++) {
        // Simple visual formatting
        if (strcmp(buses[busIndex].seats[i], "Empty") == 0) {
            printf("%d. [Empty]\t", i + 1);
        } else {
            printf("%d. [Booked]\t", i + 1);
        }
        
        // New line after every 4 seats
        if ((i + 1) % seats_per_row == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

void bookTicket() {
    int id, seatNum, foundIndex = -1;
    char passengerName[50];

    showAvailableBuses();
    printf("\nEnter Bus ID to book: ");
    scanf("%d", &id);

    // Find the bus
    for(int i = 0; i < bus_count; i++) {
        if (buses[i].bus_id == id) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        printf("\nBus not found!\n");
        return;
    }

    showBusStatus(foundIndex);

    printf("\nEnter Seat Number (1-32): ");
    scanf("%d", &seatNum);

    if (seatNum < 1 || seatNum > MAX_SEATS) {
        printf("\nInvalid seat number!\n");
        return;
    }

    // Adjust for 0-based array index
    int seatIndex = seatNum - 1;

    if (strcmp(buses[foundIndex].seats[seatIndex], "Empty") != 0) {
        printf("\nError: Seat %d is already booked by %s.\n", seatNum, buses[foundIndex].seats[seatIndex]);
    } else {
        printf("Enter Passenger Name: ");
        scanf("%s", passengerName);
        
        strcpy(buses[foundIndex].seats[seatIndex], passengerName);
        printf("\nSuccess! Seat %d booked for %s.\n", seatNum, passengerName);
    }
}