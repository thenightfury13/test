#include<stdio.h>
void main()
{
int a,b,c;
float result;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("1) addition");
printf("2) substraction");
printf("3) multiplication");
printf("4) division");
printf("enter your choice");
scanf("%d",&c);
switch(c)
{
case(1):
        result=a+b;
        break;

case(2):
        result=a-b;
        break;

case(3):
        result=a*b;
        break;

case(4):
        result=a/b;
        break;
default:exit(0);
}
printf("result = %d",result);
}
