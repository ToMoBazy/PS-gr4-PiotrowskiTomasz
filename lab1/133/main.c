#include <stdio.h>
#include <stdlib.h>

int main()
{
     int liczba1;
    int liczba2;
    int liczba3;
    scanf("%d",&liczba1);
    scanf("%d", &liczba2);
    scanf("%d", &liczba3);

    if((liczba1>liczba2)&&(liczba1>liczba3))
    {
        printf("%d", liczba1);

    }

      if((liczba2>liczba1)&&(liczba2>liczba3))
    {
        printf("%d", liczba2);

    }

      if((liczba3>liczba1)&&(liczba3>liczba2))
    {
        printf("%d", liczba3);

    }

      if((liczba3==liczba1)&&(liczba3==liczba2))
    {
        printf("%d", liczba3);

    }


    return 0;
}
