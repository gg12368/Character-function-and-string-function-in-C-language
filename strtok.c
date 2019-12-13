strtok
char* strtok(char* str,const char* sep)
作用：
strtok()用来将字符串分割成一个个片段。参数s指向欲分割的 字符串，参数delim则为分割字符串中包含的所有字符。当strtok()在参数s的字符串中发现参数delim中包含的分割字符时,则会将该字符改为\0 字符。在第一次调用时，strtok()必需给予参数s字符串，往后的调用则将参数s设置成NULL。每次调用成功则返回指向被分割出片段的 指针。
解释：
<1>sep参数是个字符串，定义了用作分隔符的字符集合；
<2>第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或多个分隔符分割的标记；
<3>strtok函数找到str中的下一个标记，并将其用\0结尾，返回一个指定这个标记的（注;strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可以修改。）
<4>strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置；
<5>strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记；
<6>如果字符串中不存在更多的标记，则返回NULL指针。
例1：

#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{ 
	char str[] = "abcd: fghi-xyz";
	char *str1= stroke(str, ": _");
	printf("%s\n", str1);

	str1 = stroke(NULL, ": _");
	printf("%s\n", str1);

	str1 = stroke(NULL, ": _");
	printf("%s\n", str1);

	
	system("pause");
	return 0;
}
