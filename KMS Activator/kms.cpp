#include <windows.h>
#include <iostream>
#include <string>
#include "kms.h"
#pragma clang diagnostic ignored "-Winvalid-source-encoding"
using namespace std;

void KMS::kms(const char key[101])
{
	char s1[10001] = "slmgr /skms ";
	strcat_s(s1, server);
	cout << "设置kms服务器" << endl;
	system(s1); //设置kms服务器

	char s2[10001] = "slmgr /ipk ";
	strcat_s(s2, key);//拼接字符串
	cout << "传入kms指令" << endl;
	system(s2);//传入指令

	cout << "执行激活操作" << endl;
	system("slmgr /ato"); //激活

	return;
}

void KMS::setKMS(int n)
{
	if (n == 1)
		strcpy_s(server, "kms.03k.org");
	if (n == 2)
		strcpy_s(server, "kms.cangshui.net");
	if (n == 3)
		strcpy_s(server, "kms.v0v.bid");
	if (n == 4)
		strcpy_s(server, "kms.chinancce.com");
	if (n == 5)
		strcpy_s(server, "kms.luody.info");
	if (n == 6)
		strcpy_s(server, "kms.cz9.cn");
	if (n == 7)
		strcpy_s(server, "kms.ddz.red");
}

void KMS::resetUPK()
{
	system("slmgr /upk");
}