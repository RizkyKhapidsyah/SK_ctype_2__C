#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int c;

	do
	{
		c = getchar();
		c = toupper(c);
		putchar(c);
	} while (c != '\n');

	_getch();
	return(0);
}