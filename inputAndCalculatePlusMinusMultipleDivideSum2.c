#include<stdio.h>
#include<conio.h>
	int a,b,c,d,e,f, Total;

int main()
	{
   	printf("Put the first number:\t");
      scanf("%d", &a);
      printf("\nPut the second number:\t");
      scanf("%d", &b);
      c = a+b;
      d = a-b;
      e = a*b;
      f = a/b;
      printf("\n%d + %d = %d\n\n", a,b,c);
      printf("%d - %d = %d\n\n", a,b,d);
      printf("%d * %d = %d\n\n", a,b,e);
      printf("%d / %d = %d\n\n", a,b,f);
      Total = c+d+e+f;
      printf("Total = %d\n", Total);
      printf("\n\n\n\nThanks you for calculating")  ;
      getch();
    }
