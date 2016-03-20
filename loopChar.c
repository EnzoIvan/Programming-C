#include<stdio.h>
#include<conio.h>

char ch;
int main()
{
	start:
   printf("\nPress Y...");
   scanf(" %c", &ch);
   if((ch=='Y')||(ch=='y'))
{
	goto start;
}
return 0;
}