strcpy（拷贝）
char* strcpy(char* destination,const char* source)
<1>目标空间必须足够大且可变，保证可以存放源字符串；
<2>源字符串以‘\0’结束，拷贝时也会将‘\0’拷贝至目标空间。
例：

#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	const char* str = "hello world";
	char buff[32];
	strcpy(buff, str);
	printf("%s\n", buff);
	system("pause");
	return 0;
}
