char* strcat(char* destination,const char* source,size_t num)
例：

#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	char str1[20];
	char str2[20];
	strcpy(str1, "To be ");
	strcpy(str2, "or not to be");
	strncat(str1, str2, 6);
	printf("%s\n", str1);
	system("pause");
	return 0;
}
