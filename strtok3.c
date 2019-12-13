例3：
（理解）

#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{ 
	char* p = "zhaoqiansunli@du.name";
	const char* sep = ".@";
	char arr[30];
	char* str = NULL;
	strcpy(arr, p);//将数据拷贝一份，处理arr数组内容
	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep));
	{
		printf("%s\n", str);
	}
	system("pause");
	return 0;
}
