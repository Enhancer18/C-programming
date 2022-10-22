#include <stdio.h>
add();
subtract();
multiplication();
division();
int n1,n2,op;
void main()

{
    printf("Hello World");
    printf("press 1 for addition\n press 2 for subtraction\npress 3 for multiplication\n press 4 for division\n");
    printf("enter the numbers: ",n1,n2);
    scanf("%d %d",&n1,&n2);
    printf("enter your choice: ",op);
    scanf("%d",&op);
    switch(op)
    {
     case 1:
      add();
     case 2:
      subtract() ;
     case 3:
       multiplication();
     case 4:
       division();
     default:
     printf("not a valid option");
    }
}
add()
{
    int addition;
    addition=n1+n2;
    printf("addition of two numbers:%d",addition);
    scanf("%d",&addition);
}
 subtract()
{
    int subtraction;
    subtraction=n1-n2;
    printf("subtraction of two numbers:%d",subtraction);
    scanf("%d",&subtraction); 
}  
multiplication()
{
    int multiply;
    multiply=n1*n2;
    printf("multiplication of two numbers:%d",multiply);
    scanf("%d",&multiply);
}
 division()
{
    int divide;
    divide=n1/n2;
    printf("division of two numbers:%d",divide);
    scanf("%d",&divide);
}
