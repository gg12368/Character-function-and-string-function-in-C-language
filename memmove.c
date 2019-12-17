#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	memmove(arr + 2, arr, 12);
	system("pause");
	return 0;
}
