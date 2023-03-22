#define NUM_ROWS 10
#define SEATS_PER_ROW 7
#include<stdio.h>
int main()
{
	int x,choice;
	printf("Enter the no of seats you want:");
	scanf("%d",&x);
	printf("Intialization:");
	printf("book");
	printf("cancel");
	printf("display");
	do
	
	{
printf("Enter the choice:");
scanf("%d/n",&choice);
switch(choice)
		{
case 1:
	intialixation();
	break;
case 2:
     book();
     break;
case 3:
	cancel();
case 4:
	display();
	break;
case 5:
    printf("Exit point");
	break;  
default:
printf("Please Enter valid choice 1/2/3/4/n");  

		}
	}
	
}
// Structure to represent a seat in a row
struct Seat {
  int status; // 0 = available, 1 = booked
};

// Structure to represent a row
struct Row {
  struct Seat seats[SEATS_PER_ROW];
};

// Array of rows
struct Row rows[NUM_ROWS];

// Pointer to the first element of the array
struct Row* head = &rows[0];

// Initialize the rows and seats
void initialize() 
{
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < SEATS_PER_ROW; j++) {
      rows[i].seats[j].status = 0;
    }
  }
}

// Book a seat in a specified row and seat number
void book(int row, int seat) {
  if (row < 0 || row >= NUM_ROWS || seat < 0 || seat >= SEATS_PER_ROW) {
    printf("Invalid row or seat number\n");
    return;
  }
  if (rows[row].seats[seat].status == 1) {
    printf("Seat is already booked\n");
    return;
  }
  rows[row].seats[seat].status = 1;
  printf("Seat booked successfully\n");
}

// Cancel a booking for a specified seat in a specified row
void cancel(int row, int seat) {
  if (row < 0 || row >= NUM_ROWS || seat < 0 || seat >= SEATS_PER_ROW) {
    printf("Invalid row or seat number\n");
    return;
  }
  if (rows[row].seats[seat].status == 0) {
    printf("Seat is not booked\n");
    return;
  }
  rows[row].seats[seat].status = 0;
  printf("Booking cancelled successfully\n");
}

// Display the status of all seats in the theater
void display() {
  printf("Seats:\n");
  for (int i = 0; i < NUM_ROWS; i++) {
    printf("Row %d: ", i);
    for (int j = 0; j < SEATS_PER_ROW; j++) {
      printf("%d ", rows[i].seats[j].status);
    }
    printf("\n");
  }
}

// To use these functions, you would first call initialize() to set all the seats to available, then call book(row, seat) to book a seat, cancel(row, seat) to cancel a booking, and display() to display the status of all the seats.
