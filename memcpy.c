情况一：

#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
void* Mymemcpy(void* dest, const void* src, int count)
{
	//char* p=(char*)dest;
	while (count--)
	{
		void* ret = dest;
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return dest;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
		//int arr2[] = { 0 };
	Mymemcpy(arr + 2, arr, 12);
	system("pause");
	return 0;
}
