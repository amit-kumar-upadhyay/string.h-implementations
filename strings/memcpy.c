#include<stdio.h>
#include<string.h>
void memcpyA(void *str1,void const *str2, size_t n )
{
    unsigned char *s1=(unsigned char *)str1;
    unsigned char *s2=(unsigned char *)str2;
    while (n>0)
    {
        *s1++=*s2++;
        n--;
    }
}
void main()
{
    unsigned char *s1="Amit Kumar";
    unsigned char *s2;
    memcpy(s2,s1,9);
    printf("%s\n",s1);
    printf("%s\n",s2);
    memcpyA(s2,s1,9);
    printf("%s\n",s1);
    printf("%s\n",s2);

}