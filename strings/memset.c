#include<stdio.h>
#include<string.h>
void *memsetA(void *str, int c, size_t n)
{
   unsigned char *s1=str;
   while (n>0)
   {
       *s1++=*(unsigned char *)&c;
       n--;
   }
   
}
void main()
{
    unsigned char u1[20]="First String";
    memsetA(u1,'#',5);
    puts(u1);
}