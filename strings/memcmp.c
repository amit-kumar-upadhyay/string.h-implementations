/*The C library function int memcmp(const void *str1, const void *str2, size_t n)) compares the first n bytes of memory area str1 and memory area str2.*/
#include<stdio.h>
#include<string.h>
int memcmpA(const void* str1,const void* str2,size_t n)
{
   unsigned char *s1=(unsigned char *)str1,*s2=(unsigned char *)str2;
   while(n>0) {
    if(*s1++!=*s2++){
       return s1[-1]<s2[-1]?-1:1;
    }
    --n;
   }
   return 0; 
}
void main()
{
  unsigned char *u1="AMIT kumar upadhyay";
  unsigned char *u2="Amit";
  int a= memcmpA(u1,u2,4);
  printf("Result = %d\n",a);
}