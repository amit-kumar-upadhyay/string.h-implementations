#include<stdio.h>
#include<string.h>
char *strcharA(const char *str, int c)
{
    unsigned char *s1=(unsigned char *)str;
    while (*s1++!='\0')
    {
        if (c==*s1)
        {
            return s1;
        }
    }
    
    return NULL;
}

void main()
{
    char u1[]="Amit Kumar Upadhyay";
    char *c=strchr(u1,'K');
    puts(u1);
    puts(c);
    puts("\n");
    char u2[]="Amit Kumar Upadhyay";
    char *c1=strcharA(u2,'K');
    puts(u2);
    puts(c1);
}