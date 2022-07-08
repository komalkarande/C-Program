#include<stdio.h>

int main()
{
   int a,b,e,d,A,B,E,D;
   char ch;
 
    printf("enter four characters");
    scanf("%c%c%c%c%%c%c%c%c",&a,&b,&e,&d,&A,&B,&E,&D);
    
    if(ch<=A/a)
    {
      printf("%c=print welcome",ch);
    }
    else if (ch<=B/b)
    {
      printf("%c=good by",ch);
    }
    else if('Ch'<=E/e)
    {
      printf("%c=have a good day",'Ch');
    }
    else if(ch<=D/d)
    {
      printf("%c=good day",ch);
    }
    else
    {
      printf("thanks");
    }
    return 0;
}