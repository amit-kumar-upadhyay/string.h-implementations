#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void memmoveA(void *str1, const void *str2, size_t n)
{
    unsigned char *s1=(unsigned char *)str1;
    unsigned char *s2=(unsigned char *)str2;
    unsigned char *temp;
    temp=malloc(strlen(str2));
    while (n>0)
    {
        *temp++=*s2++;
         n--;
    }
    while (n>0)
    {
        *s1++=*temp++;
        n--;
    }
    
}
void main()
{
    char *u1="abc";
    const char *u2="efg";
    memmoveA(u1,u2,3);
    puts(u1);
    puts(u2);
    memmove(u1,u2,3);
    puts(u1);
    puts(u2);
}