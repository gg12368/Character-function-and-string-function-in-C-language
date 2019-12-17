#include<stdio.h>
#include<windows.h>
#include<assert.h>
#pragma warning(disable:4996)
int* Mymemmove(void* dest, const void* src, int count)
{
	//char* p=(char*)dest;
	void* ret = dest;
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
 }
	return ret;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
		int arr2[] = { 0 };
	Mymemove(arr + 2, arr, 12);
	system("pause");
	return 0;
}
