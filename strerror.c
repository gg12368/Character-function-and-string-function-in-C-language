strerror
char * strerror(int errnum)
作用：
通过标准错误的标号，获得错误的描述字符串 ，将单纯的错误标号转为字符串描述，方便用户查找错误。
例1：

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<errno.h>
int main()
{
	int i;
	for (i = 0; i < 45; i++) {
		printf("%d:%s\n", i, strerror(i));	//错误码 错误码描述
	}
	system("pause");
	return 0；
}
