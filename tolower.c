#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<errno.h>
#pragma warning(disable:4996)
int main()
{
	int i=0;
	char str[] = "This Is a Game...!";
	while (str[i])
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
		i++;
	}
	printf("%s\n", str);
	system("pause");
	return 0;
}
