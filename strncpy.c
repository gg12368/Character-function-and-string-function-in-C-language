strncpy
char* strncpy(char* destination,const char* source,size_t num)
<1>拷贝num个字符从源字符串到目标空间；
<2>如果源字符串的长度小于num，则拷贝完源字符串后，给目标字符串的后面追加0，直到num个。
3.01 strcat（连接）
char* strcat（char* destination,const char* source）
<1>目标空间必须足够大且可变，保证可以存放源字符串；
<2>源字符串以‘\0’结束。
例：

#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	const char* str = "hello world";
	char buff[32]="hi hi ";
	strcat(buff, str);
	printf("%s\n", buff);
	system("pause");
	return 0;
}
