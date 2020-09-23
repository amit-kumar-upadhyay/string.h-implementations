#include<stdio.h>
#include<string.h>
char *strcpyA(char *dest, const char *src)
{
    unsigned char *s1=(unsigned char *)dest;
    unsigned char *s2=(unsigned char *)src;
    while (*s2!='\0')
    {
        *s1++=*s2++;
    }
    return s1;
}
void main()
{
    char u1[]="Amit";
    char u2[]="Kumar";
    puts(u1);
    puts(u2);
    strcpyA(u1,u2);
    puts(u1);
    puts(u2);
}