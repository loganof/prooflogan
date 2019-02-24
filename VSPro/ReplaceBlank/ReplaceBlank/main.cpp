#include <iostream>
#include <stdio.h>
using namespace std;

void prim(int m, int n)
{
	if (m >= n)
	{
		while (m%n) n++;
		(m/=n);
		prim(m, n);
		cout << n << endl;
	}
}

void main()
{
	char str[10] = "output";
	printf("\"%s\"\n", str);
	system("pause");
}