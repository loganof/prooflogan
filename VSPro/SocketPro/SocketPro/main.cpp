#include <iostream>
#include <WinSock2.h>//����ͨ��ͷ�ļ�����ļ�
//#include <pthread.h>
#pragma comment(lib,"ws2_32.lib")
using namespace std;

int main()
{
	WSADATA wsadata;
	if (WSAStartup(MAKEWORD(2, 2), &wsadata));
	{
		printf("WSAStartup�޷���ʼ��");
		return 0;
	}

	if (WSACleanup() == SOCKET_ERROR)
	{
		printf("WSACleanup����/n");
	}
	system("pause");
	return 0;
}