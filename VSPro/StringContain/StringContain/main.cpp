//判断字符串中是否包含另一个字符串
#include <iostream>
#include <string>
using namespace std;

bool StringContain(string &a, string &b);
bool StringContain2(string &a, string &b);

int main()
{
 	string a,b;
	cout << "Please input long string a =" << endl;
	cin >> a;
	cout << "Please input short string b =" << endl;
	cin >> b;
// 	a = "abcdefgese";
// 	b = "abc";
	cout << StringContain2(a,b) << endl;

	system("pause");
	return 0;
}

bool StringContain(string &a, string &b)
{
	for (int i = 0; i < b.length(); i++)
	{
		int j;
		for (j = 0;(j <a.length()) && (a[j] != b[i]); j++);
			if (j >= a.length())
			{
				return false;
			}
	}
	return true;
}

//排序后再查找
bool StringContain1(string &a, string &b)
{
// 	sort(a.begin(), a.end());
// 	sort(b.begin(), b.end());
	for (int pa = 0, pb = 0; pb < b.length();)
	{
		while ((pa < a.length()) && (a[pa] < b[pa]))
		{
			++pa;
		}
		if ((pa >= a.length() ) || (a[pa] > b[pa]))
		{
			return false;
		}
		++pb;
	}
	return true;
}

//位运算法
bool StringContain2(string &a, string &b)
{
	int hash = 0;
	for(int i = 0; i < a.length(); ++i)
	{
		hash |= (1 << (a[i] - 'A'));
	}
	for (int i = 0; i < b.length(); ++i)
	{
		if ((hash & (1 << (b[i] - 'A'))) == 0)
		{
			return false;
		}
	}
	return true;
}





