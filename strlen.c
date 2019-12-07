strlen（求字符串长度）
size_t strlen(const char *str)
<1>由于要求字符串的长度，因此字符串不可被修改，用const修饰；
<2>函数返回值为无符号数。
例：
#include<stdio.h>
#include<windows.h>
int main()
{
	const char* str1 = "abcdef";
	const char* str2 = "bbb";
	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("str1>str2\n");
	}
	system("pause");
	return 0;
}
其中(strlen(str2) - strlen(str1) > 0)条件永远成立。
