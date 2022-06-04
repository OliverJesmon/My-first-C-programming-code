/* This program performs basic Arithmetic operations.First, 
compile the code then, run the output file.The program asks
 input of two numbers a and b to the end user.The user has 
to assign the two number.The program automatically performs
arithmetic operations and gives the end result of all the 
operations simultaneously. *\


#include <stdio.h>  //header file
int main()
{
int a,b,sum,subt,prod,divi; //variable declaration

printf("Enter number a "); //Input of first number
scanf("d%",&a);

printf("Enter number b "); //Input of second number
scanf("d%",&b);

sum = a+b;  //assigning variables
subt = a-b;
prod = a*b;
divi = a/b;

printf("Addition of the two given numbers: %d \n",sum);  //final output
printf("Subtraction of the two given numbers: %d \n",subt);  //final output
printf("Multiplication of the two given numbers: %d \n",prod); //final output
printf("Division of the two given numbers: %d \n",divi); //final output

return (0);
}
