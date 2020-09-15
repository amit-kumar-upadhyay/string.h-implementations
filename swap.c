#include<stdio.h>
int main(void)
{
    int a=20, b=30;
    int *c;
    c=&a;
    b+=*c;
    *c=b-*c;
    b=b-*c;
    printf("Value of a=%d\n",a);
    printf("Value of b=%d\n",b);
}