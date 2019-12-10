strstr() 函数
作用：搜索一个字符串在另一个字符串中的第一次出现。该函数返回字符串的其余部分（从匹配点）。如果未找到所搜索的字符串，则返回 false。该函数是二进制安全的。
例1：

int main()
{ 
	char str[] = "This is a simple string";
	char* pch= strstr(str, "simple");
	puts(pch);
	system("pause");
	return 0;
}
