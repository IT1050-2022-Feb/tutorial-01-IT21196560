/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum( int num1, int num2 );//declaring function prototype
int maximum( int num1, int num2 );//declaring function prototype
int multiply( int num1, int num2 );//declaring function prototype

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum( int num1, int num2 )//beginin of the minimum function
{
    if( num1 > num2 ){//checks wheather num1 greater than num2

        return num2; //returns the minimum number

    }
    else if( num1 < num2 ){//checks wheather num2 greater than num1


        return num1;//returns the minimum number

    }

//end of the minimum function
}
int maximum( int num1, int num2 )//beginin of the maximum function
{
    if( num1 > num2 ){//checks wheather num1 greater than num2

        return num1;//returns the maximum number

    }
    else if( num1 < num2 ){//checks wheather num2 greater than num1

        return num2;//returns the maximum number

    }

//end of the maximum function
}
int multiply( int num1, int num2 )//begining of the multiply function
{
    return num1 * num2;//returns the multiplied answer
//end of the multiply function
}
