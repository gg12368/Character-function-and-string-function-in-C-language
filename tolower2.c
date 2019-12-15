#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<errno.h>
#pragma warning(disable:4996)
int main()
{
	int i=0;
	char str[] = "This Is a Game...!";
	char c;
	while (str[i])
	{
		if (isalpha(str[i]))
		{
			if (isupper(str[i]))
			{
				c = tolower(str[i]);
				//putchar(str);
			}
			else
			{
				c = str[i];
			}
			putchar(c);
		}
		i++;
	}
	system("pause");
	return 0;
}
