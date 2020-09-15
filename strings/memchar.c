#include<stdio.h>
#include<string.h>
int main ()
{
   char *p;
   char data[]="Amit Kumar Upadhyay";
   char search='y';
   p=(char *)memchr(data,search,strlen(data));
   if(p!=NULL)
    puts(p);
    else
    {
        puts("Character is not present!");
    }
    
    return 0;

}