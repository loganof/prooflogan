#include <iostream>
using namespace std;

int main()
{
	int n, reverse = 0, rem, temp;
	cout << "please input an integer:" << endl;
	cin >> n;
	temp = n;
	while (temp != 0)
	{
		rem = temp % 10;
		reverse = reverse * 10 + rem;
		temp /= 10;
	}

	if(reverse == n)
		cout << n <<" is a palindrome.\n";
	else
		cout << n <<" is not a palindrome.\n";

	system("pause");
	return 0;
}