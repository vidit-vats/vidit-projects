#include <stdio.h>
#include <conio.h>
int calfac (int a);
int main()
{
	int a,fact;
	printf("Enter the number of which you want to find out the factorial\n");
	scanf_s("%d", &a);
	fact = calfac(a);
	printf("Answer:%d\n", fact);

	




	return 0;
}


/* This is the main coding of our factorial program*/
int calfac (int a)
{
	int i, f = 1;
	for (i = 1; i <= a; i++)
	{
		f = f * i;
	}
	return f;

