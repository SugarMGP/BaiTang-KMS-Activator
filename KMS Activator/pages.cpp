#include <iostream>
#include <windows.h>
#include "clearScreen.h"
#include "kms.h"
#pragma clang diagnostic ignored "-Winvalid-source-encoding"
using namespace std;

void printPage1(const char s[10000])
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "当前KMS服务器为: " << s << endl;
	cout << endl;
	cout << "1. 激活Windows 10" << endl;
	cout << "2. 激活Windows 8" << endl;
	cout << "3. 激活Windows 7" << endl;
	cout << "4. 激活Windows Server" << endl;
	cout << "5. 选择KMS服务器" << endl;
	cout << "6. 卸载产品密钥 ( 重置激活状态 ) " << endl;
	cout << endl;
	cout << "请输入要执行的操作：" << endl;
}

void printPageW10()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.Windows 10 专业版" << endl;
	cout << "2.Windows 10 专业工作站版" << endl;
	cout << "3.Windows 10 专业教育版" << endl;
	cout << "4.Windows 10 教育版" << endl;
	cout << "5.Windows 10 企业版" << endl;
	cout << "6.Windows 10 企业版 LTSC 2019" << endl;
	cout << "7.Windows 10 企业版 LTSB 2016" << endl;
	cout << "8.Windows 10 企业版 2015 LTSB" << endl;
	cout << endl;
	cout << "请输入要激活的版本：" << endl;
}

void printPageW8()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.Windows 8.1 专业版" << endl;
	cout << "2.Windows 8.1 企业版" << endl;
	cout << "3.Windows 8 专业版" << endl;
	cout << "4.Windows 8 企业版" << endl;
	cout << endl;
	cout << "请输入要激活的版本：" << endl;
}

void printPageW7()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.Windows 7 专业版" << endl;
	cout << "2.Windows 7 企业版" << endl;
	cout << endl;
	cout << "请输入要激活的版本：" << endl;
}

void printPageWS()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.Windows Server 1909/1903/1809 Datacenter" << endl;
	cout << "2.Windows Server 1909/1903/1809 Standard" << endl;
	cout << "3.Windows Server 2019 Datacenter" << endl;
	cout << "4.Windows Server 2019 Standard" << endl;
	cout << "5.Windows Server 2019 Essentials" << endl;
	cout << "6.Windows Server 2016 Datacenter" << endl;
	cout << "7.Windows Server 2016 Standard" << endl;
	cout << "8.Windows Server 2016 Essentials" << endl;
	cout << endl;
	cout << "请输入要激活的版本：" << endl;
}

void printPageKMS()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.kms.03k.org" << endl;
	cout << "2.kms.cangshui.net" << endl;
	cout << "3.kms.v0v.bid" << endl;
	cout << "4.kms.chinancce.com" << endl;
	cout << "5.kms.luody.info" << endl;
	cout << "6.kms.cz9.cn" << endl;
	cout << "7.kms.ddz.red" << endl;
	cout << endl;
	cout << "请输入要选择的KMS服务器：" << endl;
}

void printYesNo()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "确定？( Y/N )" << endl;
}

void printDone()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "激活操作已执行！" << endl;
	cout << "若对话框内有“已成功激活产品”字样则为成功！" << endl;
	cout << "若激活失败可能是版本选择错误，请选择正确的版本激活！" << endl;
}