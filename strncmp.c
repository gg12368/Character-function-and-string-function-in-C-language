 strncmp
int strncmp(const char* str1,const char* str2,size_t num)
例：

#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	char str1[32] = "abcdefg";
	char str2[32] = "abcdxyz";
	int ret = strncmp(str1, str2,4);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
