#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<errno.h>
#pragma warning(disable:4996)
int main()
{
	FILE* fp = fopen("log.txt", "r");
	printf("%d:%s\n", errno, strerror(errno));/*错误码是2。程序调用函数或库函数失败时，会将错误码写入全局变量errno。可以通过strerror将错误码传入转成错误码描述*/
	system("pause");
	return 0;
}
