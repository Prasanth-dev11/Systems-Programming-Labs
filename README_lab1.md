<!--
NOTES:
This README is an example README for CS332/532 lab#1: To Check if a number is Even or Odd.
-->

# Compilation Instructions
<!--Start of the code-->
#include <stdio.h>
<!--Main Function-->
int main() {
    <!--Variable Declaration-->
    int given_number;
    <!--To read variable/input-->
    scanf("%d",&given_number);
    <!--Conditional statement to check if a number is Even or Odd and to print the appropriate result-->
    if(given_number%2==0)
    {
        printf("The number is an even number");
    }
    else
    {
        printf("The number is an odd number");
    }
}
<!--End of the code-->

Compile the code and provide the input. Based on the input given, it will trigger the output.

# My Files
## EvenOdd.c

# Output screenshots
![Alt text](image-1.png)
