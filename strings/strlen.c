#include<stdio.h>
#include<string.h>
size_t strlenA(const char *str)
{
  const char *newStr;
  newStr=str;
  size_t a=0;
  while (*newStr!='\0')
  {
      newStr++;
      a++;
  }
  return a;
}
void main()
{
     const char *s1="Amit Kumar Upadhyay";
     printf("Number of characters in string = %d",strlenA(s1));
}