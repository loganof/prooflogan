//动态规划与贪婪算法
#include <iostream>
using namespace std;

int main()
{

	system("pause");
	return 1;
}

int cutString(int len)
{
	if (len < 2)
	{
		return 0;
	}
	if (len == 2)
	{
		return 1;
	}
	if (len == 3)
	{
		return 2;
	}
}