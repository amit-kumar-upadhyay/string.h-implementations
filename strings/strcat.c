#include<stdio.h>
#include<string.h>
void strcatA(char *s1, const char *s2)
{
    char *dest=s1+strlen(s1);
    const char *src=s2;
    while(*src!='\0')
    {
        *dest++=*src++;
    }
    *dest='\0';
}
void main()
{
    char u1[]="Amit ";
    char u2[]="Kumar ";
    strcat(u1,u2);
    puts(u1);
    char u3[]="Upadhyay";
    strcatA(u1,u3);
    puts(u1);
}