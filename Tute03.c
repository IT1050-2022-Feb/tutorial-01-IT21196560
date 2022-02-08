/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int number = 0, count, tempnum = 0 ;//declaring variables

  printf( "Enter the limit number :- " );//promt for input
  scanf( "%d", &number );//reads the value for number

  //count will be increas till number limit
  for( count  = 0; count <= number; count++ ){
    
    tempnum = tempnum + count;//calculates sum of the numbers


  }

  printf( "sum of the numbers :- %d", tempnum );//prints the sum of the numbers
  
  return 0;
  //end of the main function
}

