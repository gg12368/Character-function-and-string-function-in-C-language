#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{ 
	char str[] = "- This, a sample string.";
	char* pch;
	printf("Splitting string \"%s\" into tokens:\n",str);
	pch = strtok(str, " ,.-");
	while (pch!= NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}
	system("pause");
	return 0;
}
