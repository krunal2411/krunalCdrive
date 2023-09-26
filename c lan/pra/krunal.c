/*
1 we can't start var name from any numbers 
2 we can declare varclu name from alp (cap,sam)
3 white sape are not allowed you can use _
we can't use any keywords as var name 
*/
#include<stdio.h>
main()
{
int num=10; //%d
float num1=11.5 //%f
char name='a'; //%c,%s
double num2=12.5; //%lf
printf("hello wolrd \n")
printf("%d\n",sizeof(num))
printf("%d\n",sizeof(float))
printf("%d\n",sizeof(char))
printf("%d\n",sizeof(double))
printf("%d",num);
printf("\n%f",num1);
printf("\n%c",name);
printf("\n%1f",num2);
}
