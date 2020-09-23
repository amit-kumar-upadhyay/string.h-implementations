#include<stdio.h>
#include<string.h>
int strcmpA(const char *s1, const char *s2)
{
    char *str1=(unsigned char *)s1;
    char *str2=(unsigned char *)s2;
    unsigned char c1,c2;
    for(;c1==c2;)
    {
        c1=(unsigned char)*str1++;
        c2=(unsigned char)*str2++;
        if(c1=='\0')
            return c1-c2;
    }
    return c1-c2;
}
void main()
{
    char *u1="AMIT KUMAR";
    char *u2="AMIT KUMAR UPADHYAY";
    int c=strcmp(u1,u2);
    printf("Value of = %d\n",c);
    int d=strcmpA(u1,u2);
    printf("Value of = %d",c);
}