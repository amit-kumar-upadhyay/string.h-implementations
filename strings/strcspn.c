#include<stdio.h>
#include<string.h>
size_t strcspnA(const char *src, const char *dest)
{
    char *s1=(char *)src;
    char *s2=(char *)dest;
    int n=0;
    while (*s1!='\0')
    {
        if(*s2==*s1)
        {
            return n++;
            break;
        }
        n++;
        *s1++;
    }   
    return 0;
}
void main()
{
    char *s1="Amit Kumar Upadhyay";
    char *s2="i";
    int c=strcspn(s1,s2);
    printf("%d\n",c);
    int d=strcspnA(s1,s2);
    printf("%d ",d);
}