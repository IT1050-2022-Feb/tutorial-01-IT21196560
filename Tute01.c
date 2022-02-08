/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, total = 0;//declaring variables
  float Avg;//declaring variables

  printf( "Enter the Subject 1 marks :- " );//promt for input
  scanf( "%d", &mark1 );//reads the value for mark 1
  printf( "Enter the Subject 1 marks :- " );//promt for input
  scanf( "%d", &mark2 );//reads the value for mark 2
  

  total = mark1 + mark2;//calculates the total
  Avg = ( float ) total / 2;// calculates the Avarage

  printf( "Average is :- %.2f", Avg );//prints the the average
  
  return 0;
  //end of the main function
}

