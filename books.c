Author:Alphonce kiplangat
REG:CT101/G/23286/24

//varables and data types
// preprocessor directive - scanf (),printf()
#include <stdio.h>

int main() {
  int bookID, dueDate, returnDate, daysOverdue;
  float fineAmount;
  
  // Input from user
  printf("Enter Book ID: ");
  scanf("%d", &bookID);
  printf("Enter Due Date: ");
  scanf("%d", &dueDate);
  printf("Enter Return Date: ");
  scanf("%d", &returnDate);
  
  // Calculate days overdue
  daysOverdue = returnDate - dueDate;
  
  // Determine fine rate and calculate fine amount
  if (daysOverdue <= 7) {
  fineAmount = daysOverdue * 20;
  } else if (daysOverdue <= 14) {
  fineAmount = 7 * 20 + (daysOverdue - 7) * 50;
  } else {
  fineAmount = 7 * 20 + 7 * 50 + (daysOverdue - 14) * 100;
  }
  
  // Display results
  printf("Book ID: %d\n", bookID);
  printf("Due Date: %d\n", dueDate);
  printf("Return Date: %d\n", returnDate);
  printf("Days Overdue: %d\n", daysOverdue);
  printf("Fine Rate: Ksh. %.2f\n", fineAmount);
  
  return 0;
}