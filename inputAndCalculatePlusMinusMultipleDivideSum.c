#include<stdio.h>
#include<conio.h>
	float a,b,c,d,e,f, Total;
   float sum (float x, float y);
   float minus (float xx, float yy);
   float multiple (float xxx, float yyy);
   float divide (float xxxx, float yyyy);
   float main()
	{
   	printf("\aPut the first number:\t");
      scanf("%f", &a);
      printf("\a\nPut the second number:\t");
      scanf("%f", &b);
      c = sum(a,b);
      d = minus(a,b);
      e = multiple(a,b);
      f = divide(a,b);
      printf("\n%f + %f = %f\n\n", a,b,c);
      printf("%f - %f = %f\n\n", a,b,d);
      printf("%f * %f = %f\n\n", a,b,e);
      printf("%f / %f = %f\n\n", a,b,f);
      Total = (c+d+e+f);
      printf("Total = %f\n", Total);
      printf("\n\n\n\nThanks you for calculating")  ;
      getch();
    }
float sum(float x, float y)
	{ return(x + y);
   }
float minus(float xx, float yy)
	{ return(xx - yy);
   }
float multiple(float xxx, float yyy)
	{ return(xxx * yyy);
   }
float divide (float xxxx, float yyyy)
	{ return(xxxx / yyyy);
   }