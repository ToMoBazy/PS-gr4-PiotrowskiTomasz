#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int a,b,c,d,x1,x2;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  d=((b*b)-(4*a*c))

  if(d<0)
  {
      printf("brak roziwazan")
  }

  if(d==0)
  {
    x1=-b/(2*a)

    printf("%d", x1);
  }
  if(d>0)
  {
     x1=(-b-sqrt(d))/(2*a);
     x1=(-b+sqrt(d))/(2*a);
     printf("%d", x1);
     printf("%d", x2);
  }



}
