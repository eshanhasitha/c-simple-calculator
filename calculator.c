#include <stdio.h>
int main() {
int num,num1,sum;

//get inputs from user
printf("___Simple Calculator___\n");
printf("Enter the number of inputs: ");
scanf("%d",&num);

for(int i=1;i<=num;i++){
    printf("Enter Number %d: ",i);
    scanf("%d",&num1);
   
    printf("___Chose oparation___ \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Modulus \n");
    int op;
    scanf("%d",&op);

    //opatations
    switch (op)
    {
    case 1:
        printf("Result: %d\n",sum=sum+num1);
        break;
    case 2:
        printf("Result: %d\n",sum=sum-num1);
        break;  
    case 3:
        sum=1;
        printf("Result: %d\n",sum=sum*num1);
        break;
    case 4:
        sum=1;
        printf("Result: %d\n",sum=sum/num1);
        break;
    case 5:
        sum=1;
        printf("Result: %d\n",sum=sum%num1);
        break;
    default:
        printf("Invalid Oparation");
        break;
    }
}

return 0;
} 
