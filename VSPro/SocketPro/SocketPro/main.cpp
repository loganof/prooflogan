#include <iostream>
#include <WinSock2.h>//网络通信头文件与库文件
//#include <pthread.h>
#pragma comment(lib,"ws2_32.lib")
using namespace std;

int main()
{
	WSADATA wsadata;
	if (WSAStartup(MAKEWORD(2, 2), &wsadata));
	{
		printf("WSAStartup无法初始化");
		return 0;
	}

	if (WSACleanup() == SOCKET_ERROR)
	{
		printf("WSACleanup出错/n");
	}
	system("pause");
	return 0;
}