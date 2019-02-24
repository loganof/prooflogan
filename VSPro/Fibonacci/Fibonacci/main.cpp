//求解Fibonacci数列第n项
#include <iostream>
using namespace std;

long long Fibonacci(unsigned int n);
long long Fibonacci1(unsigned n);
int main()
{
	unsigned int n;
	cout << "请输入N=" << endl;
	cin >> n;
	cout << "Fibonacci第N列的值为：" 
		<< Fibonacci1(n) << endl;

	system("pause");
	return 0;
}
//随着N的增长，时间复杂度呈N的指数增长
long long Fibonacci(unsigned int n)
{
	if (n <= 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return Fibonacci(n - 2) + Fibonacci(n - 1);
}

//改进算法
long long Fibonacci1(unsigned n)
{
	int result[2] = {0, 1};
	if (n < 2)
	{
		return result[n];
	}
	long long numberOne = 1;
	long long numbertwo = 0;
	long long total = 0;
	for (unsigned int i = 2; i <= n; ++i)
	{
		total = numberOne + numbertwo;
		numbertwo = numberOne;
		numberOne = total;
	}
	return total;
}