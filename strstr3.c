例3：

#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{ 
	char str[] = "This is a simple simple simple string";
	char* pch = strstr(str, "simple");
	while (pch) {
		strncpy(pch, "sample", 6);
		pch = strstr(str, "simple");
	}
	puts(str);
	system("pause");
	return 0;
}
