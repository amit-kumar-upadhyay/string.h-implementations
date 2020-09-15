#include<stdio.h>
#include<stddef.h>
#include<string.h>
void *memchr(const void *s, int c, size_t n)
{
    const unsigned char* p=s;
    const unsigned char* end =p+n;
    for(;;)
    {
        if(p>=end||p[0]==c)
            break;
        p++;
    } 
    if(p>=end)
        return NULL;
    else
    {
        return (void*) p;
    }
    
}
void main ()
{
    char *p;
    char data[]="Amit Kumar Upadhyay";
    char search='y';
    p=(char *)memchr(data,search,strlen(data));
    if(p!=NULL)
        puts(p);
    else
        puts("Character is not present!");
    
}