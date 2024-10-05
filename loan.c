Author:Alphonce kiplangat
REG:CT101/G/23286/24

// variables and data types
//preprocessor directive - scanf(),printf()
#include <stdio.h>
int main() {
  int age;
  float income;
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your annual income in shillings: ");
  scanf("%f", &income);
  if (age >= 21 && income >= 21000) {
  printf("Congratulations you qualify for a loan.");
  } else {
  printf("Unfortunately, we are unable to offer you a loan this time.");
  }

  return 0;
}
