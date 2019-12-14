#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<errno.h>
int main()
{
	extern int errno;//errno是系统的全局变量，不需自己定义，只需声明便可使用
	printf("%d:%s\n", errno, strerror(errno));
	system("pause");
	return 0；
}
