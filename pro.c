#include<stdio.h> 
 
#define NUM_ROWS 10 
#define SEATS_PER_ROW 7 
 
// Structure to represent a seat in a row struct Seat { 
  int status; // 0 = available, 1 = booked 
}; 
 
// Structure to represent a row 
struct Row { 
  struct Seat seats[SEATS_PER_ROW]; 
}; 
 
// Array of rows 
struct Row rows[NUM_ROWS]; 
 
// Pointer to the first element of the array struct Row* head = &rows[0]; 
 
// Initialize the rows and seats void initialize() { 
  for (int i = 0; i < NUM_ROWS; i++) { 
    for (int j = 0; j < SEATS_PER_ROW; j++) { 
      rows[i].seats[j].status = 0; 
    } 
  } 
} 
 
// Book a seat in a specified row and seat number void book(int row, int seat) { 
  if (row < 0 || row >= NUM_ROWS || seat < 0 || seat >= SEATS_PER_ROW) {     printf("Invalid row or seat number\n");     return; 
  } 
  if (rows[row].seats[seat].status == 1) {     printf("Seat is already booked\n");     return; 
  } 
  rows[row].seats[seat].status = 1;   printf("Seat booked successfully\n"); 
} 
 
// Cancel a booking for a specified seat in a specified row void cancel(int row, int seat) { 
  if (row < 0 || row >= NUM_ROWS || seat < 0 || seat >= SEATS_PER_ROW) {     printf("Invalid row or seat number\n");     return; 
  } 
  if (rows[row].seats[seat].status == 0) {     printf("Seat is not booked\n"); 
    return; 
  } 
  rows[row].seats[seat].status = 0; 
  printf("Booking cancelled successfully\n"); 
} 
 
// Display the status of all seats in the theater void display() {   printf("\nThe Available seats :\n");   for (int i = 0; i < NUM_ROWS; i++) { 
    printf("Row %d: ", i);     for (int j = 0; j < SEATS_PER_ROW; j++) {       printf("%d ", rows[i].seats[j].status); 
    } 
    printf("\n"); 
  } 
} 
 
 
int main() { 
   
  printf("************* The ticket booking system of Cinemax theater 
******************\n");   printf("Credit :- Abhishek Raut , Maheshwari Bawankule And Himanshi Kawade\n");   printf("\n"); 
  initialize(); 
 
  while (1) { 
    printf("Enter a command (b to book, c to cancel, d to display, q to quit): ");     char cmd;     scanf(" %c", &cmd); 
 
    if (cmd == 'b') {       // Book a seat       int row, seat; 
      printf("Enter row number: ");       scanf("%d", &row);       printf("Enter seat number: ");       scanf("%d", &seat);       book(row, seat);     } else if (cmd == 'c') {       // Cancel a booking       int row, seat; 
      printf("Enter row number: ");       scanf("%d", &row);       printf("Enter seat number: ");       scanf("%d", &seat);       cancel(row, seat);     } else if (cmd == 'd') {       // Display seat status       display(); 
    } else if (cmd == 'q') { 
      // Quit       break;     } else { 
      printf("Invalid command\n"); 
    } 
  } 
 
  return 0; 
} 
  
 
  

