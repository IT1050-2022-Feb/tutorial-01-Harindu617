/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1, sub2, sum = 0;
  float avg = 0;

  printf("Enter the marks of first subject : ");
  scanf("%d", &sub1);

  printf("Enter the marks of second subject : ");
  scanf("%d", &sub2); 

  sum = sub1 + sub2;
  avg = sum / 2.0;

  printf("Avarage of the two marks : %.2f", avg);

  return 0;
}

