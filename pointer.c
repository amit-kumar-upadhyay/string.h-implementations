#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int n=10;
    printf("value at n = %d\n",n);
    printf("Address of n =%d\n",&n);
    int *np;
    np=&n;
    printf("value of variable stored at np=%d\n",*np);
    printf("value stored in np=%d\n",np);
    printf("address of np=%d\n",&np);

}