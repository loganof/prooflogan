//将字符串abcdef前三个字符移动到尾部
#include <iostream>
using namespace std;

void LeftShiftOne(char* str, int len);
void LeftRotateString(char* str, int len, int m);

void ReverseString(char* str, int from, int to);
void LeftRotateString1(char * str, int len, int m);

int main()
{
	char str[10] = "abcdef";
	int len = strlen(str);
	char * ptr = "abc";
	//LeftRotateString(str,len, 3);
	LeftRotateString1(str, len, 3);
	for (int i = 0; i < len; i++)
	{
		cout << str[i];
	}
	system("pause");
	return 1;
}

void LeftShiftOne(char* str, int len)//the first name of function name is large
{
	//保存第一个字符
	char t = str[0];
	for (int i = 1; i < len; i++)
	{
		str[i - 1] = str[i];
	}
	str[len - 1] = t;
}

void LeftRotateString(char* str, int len, int m)
{
	while(m--)
		LeftShiftOne(str, len);
}

//解法2
void ReverseString(char* str, int from, int to)
{
	while(from < to)
	{
		char t = str[from];
		str[from++] = str[to];
		str[to--] = t;
	}
}

void LeftRotateString1(char * str, int len, int m)
{
	m %= len;
	ReverseString(str, 0, m - 1);
	ReverseString(str, m, len - 1);
	ReverseString(str, 0, len - 1);
}
















