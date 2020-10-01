#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *strtokA(char *str, const char *delim)
{
   //char *u1=str;
   char *u2;
   u2=(char *)(malloc(sizeof(char)*strlen(str)));
   const char *d=delim;
   int pos=0;
   while (*(str+pos)!=*delim)
   {
       u2[pos]=str[pos] ;
       pos++;
   }
    return u2;
}
void main()
{
    char s1[]="Amit @Kumar @Upadhyay";
    puts(s1);
    char s3[2]="@";
    char *s2=strtokA(s1,s3);
    while (s2!=NULL)
    {    
        puts(s2);
        s2=strtokA(NULL,s3);
    }
}