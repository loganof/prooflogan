//���Fibonacci���е�n��
#include <iostream>
using namespace std;

long long Fibonacci(unsigned int n);
long long Fibonacci1(unsigned n);
int main()
{
	unsigned int n;
	cout << "������N=" << endl;
	cin >> n;
	cout << "Fibonacci��N�е�ֵΪ��" 
		<< Fibonacci1(n) << endl;

	system("pause");
	return 0;
}
//����N��������ʱ�临�Ӷȳ�N��ָ������
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

//�Ľ��㷨
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