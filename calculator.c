#include <stdio.h>
int main() {
int num1,num2;
//get inputs from user
printf("Enter Number 1: ");
scanf("%d",&num1);
printf("Enter Number 2: ");
scanf("%d",&num2);
printf("___Chose oparation___ \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Modulus \n");
int op;
scanf("%d",&op);

//opatations
switch (op)
{
case 1:
    printf("Result: %d",num1+num2);
    break;
case 2:
    printf("Result: %d",num1-num2);
    break;  
case 3:
    printf("Result: %d",num1*num2);
    break;
case 4:
    printf("Result: %d",num1/num2);
    break;
case 5:
    printf("Result: %d",num1%num2);
    break;
default:
    printf("Invalid Oparation");
    break;
}

return 0;
} 
