#include<stdio.h>
void main()
{
    int n=10,m=20;
    int const *p;
    printf("Address at pointer p= %d\n",p);
    p=&n;
    printf("Print n using p= %d\n",*p);
    n+=2;
    //*p+=2; Not possible because pointer p is marked constant
    p=p+2;
    printf("Address at pointer p after update= %d\n",p);
    printf("Print n using p after update= %d\n",*p);
    const int *k;
    k=&m;
    printf("Print m using k= %d\n",*k);
    m+=2;
    printf("Print m using k after update= %d\n",*k);
    //*k+=2; Not possible because pointer k is marked constant.


}