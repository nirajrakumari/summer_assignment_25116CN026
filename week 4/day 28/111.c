#include <stdio.h>
#include <string.h>

// Structure declaration
struct TicketBooking {
    int bookingId;
    char passengerName[50];
    char movieTitle[50];
    float ticketPrice;
    int totalSeats;
    float totalCost;
};

int main() {
    struct TicketBooking ticket;

    // 1. Input Booking ID
    printf("Enter Booking ID: ");
    scanf("%d", &ticket.bookingId);
    
    // Clear the leftover newline character from the buffer before gets()
    getchar(); 

    // 2. Input Passenger Name using gets()
    printf("Enter Passenger Name: ");
    gets(ticket.passengerName);

    // 3. Input Movie Title using gets()
    printf("Enter Movie/Show Title: ");
    gets(ticket.movieTitle);

    // 4. Input Ticket Pricing Details
    printf("Enter Single Ticket Price: ");
    scanf("%f", &ticket.ticketPrice);

    printf("Enter Number of Seats: ");
    scanf("%d", &ticket.totalSeats);

    // 5. Sequential Calculation
    ticket.totalCost = ticket.ticketPrice * ticket.totalSeats;

    // 6. Display Ticket Receipt (Your Exact Style)
    printf("\n========================================\n");
    printf("         TICKET BOOKING SYSTEM          \n");
    printf("========================================\n");
    printf("Booking ID:  %d\n", ticket.bookingId);
    printf("Passenger:   %s\n", ticket.passengerName);
    printf("Show/Movie:  %s\n", ticket.movieTitle);
    printf("----------------------------------------\n");
    printf("Seat Price:  %.2f\n", ticket.ticketPrice);
    printf("Total Seats: %d\n", ticket.totalSeats);
    printf("----------------------------------------\n");
    printf("Total Bill:  %.2f\n", ticket.totalCost);
    
    // Condition check mapped exactly like your PASSED/FAILED line
    printf("Booking:     %s\n", (ticket.totalSeats > 0) ? "CONFIRMED" : "FAILED");
    printf("========================================\n");

    return 0;
}
