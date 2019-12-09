strcmp（比较）
int strcmp（const char* str1,const char* str2）
<1>第一个字符串大于第二个字符串则返回大于0的数字；
<2>两字符串相等，则返回0；
<3>第一个字符串小于第二个字符串则返回小于0的数字；
例：

#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	char str1[32] = "abcdefg";
	char str2[32] = "abcdxyz";
	int ret = strcmp(str1, str2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
