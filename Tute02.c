/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  float Distance = 0, amount = 0;//declaring variavles


  printf( "Enter the travelled distance :- " );//promt for input
  scanf( "%f", &Distance );//reads the value for Distance

  //checks weather the Distance is under 30 or above 30
  if( Distance > 30 ){

      amount = ( ( Distance - 30 ) * 40 ) + ( 30 * 50 );//calculate the amount


  }
  else{

       amount = Distance * 50;//calculate the amount

  }
  
  printf( "Amount is :- Rs %.2f/=", amount );//printt the amount


  return 0;
}
