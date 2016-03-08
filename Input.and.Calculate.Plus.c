#include<stdio.h>
#include<conio.h>
int a,b,c;

int main()
	{
   	printf("Enter Your Number: ");
      scanf("%d", &a);
      printf("Enter Your Number: ");
      scanf("%d", &b);
      c= a+b;
      printf("%d + %d = %d\n", a, b, c);
      getch();
      return 0;
   }