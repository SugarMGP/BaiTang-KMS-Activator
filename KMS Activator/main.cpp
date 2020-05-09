#include <iostream>
#include <windows.h>
#include <conio.h>

#include "clearScreen.h"
#include "Hello.h"
#include "kms.h"
#include "pages.h"

using namespace std;

int main()
{
	char c;
	KMS kmsn;
	Hello(); //»¶Ó­½çÃæ
	Sleep(1200);
	while (1) 
	{
		printPage1(kmsn.server);
		cin >> c;
		if (c == '1')
		{
			int n;
			char c1;
			printPageW10();
			cin >> n;
			printYesNo();
			c1 = _getch();
			if (c1 == 'y' || c1 == 'Y')
			{
				clearScreen();
				if (n == 1)
					kmsn.kms("W269N-WFGWX-YVC9B-4J6C9-T83GX");
				if (n == 2)
					kmsn.kms("NRG8B-VKK3Q-CXVCJ-9G2XF-6Q84J");
				if (n == 3)
					kmsn.kms("6TP4R-GNPTD-KYYHQ-7B7DP-J447Y");
				if (n == 4)
					kmsn.kms("NW6C2-QMPVW-D7KKK-3GKT6-VCFB2");
				if (n == 5)
					kmsn.kms("NPPR9-FWDCX-D2C8J-H872K-2YT43");
				if (n == 6)
					kmsn.kms("M7XTQ-FN8P6-TTKYV-9D4CC-J462D");
				if (n == 7)
					kmsn.kms("DCPHK-NFMTC-H88MJ-PFHPY-QJ4BJ");
				if (n == 8)
					kmsn.kms("WNMTR-4C88C-JK8YV-HQ7T2-76DF9");
				printDone();
				Sleep(3100);
			}
		}
		if (c == '2')
		{
			int n;
			char c1;
			printPageW8();
			cin >> n;
			printYesNo();
			c1 = _getch();
			if (c1 == 'y' || c1 == 'Y')
			{
				clearScreen();
				if (n == 1)
					kmsn.kms("GCRJD-8NW9H-F2CDX-CCM8D-9D6T9");
				if (n == 2)
					kmsn.kms("MHF9N-XY6XB-WVXMC-BTDCT-MKKG7");
				if (n == 3)
					kmsn.kms("NG4HW-VH26C-733KW-K6F98-J8CK4");
				if (n == 4)
					kmsn.kms("32JNW-9KQ84-P47T8-D8GGY-CWCK7");
				printDone();
				Sleep(3100);
			}
		}
		if (c == '3')
		{
			int n;
			char c1;
			printPageW7();
			cin >> n;
			printYesNo();
			c1 = _getch();
			if (c1 == 'y' || c1 == 'Y')
			{
				clearScreen();
				if (n == 1)
					kmsn.kms("FJ82H-XT6CR-J8D7P-XQJJ2-GPDD4");
				if (n == 2)
					kmsn.kms("33PXH-7Y6KF-2VJC9-XBBR8-HVTHH");
				printDone();
				Sleep(3100);
			}
		}
		if (c == '4')
		{
			int n;
			char c1;
			printPageWS();
			cin >> n;
			printYesNo();
			c1 = _getch();
			if (c1 == 'y' || c1 == 'Y')
			{
				clearScreen();
				if (n == 1)
					kmsn.kms("6NMRW-2C8FM-D24W7-TQWMY-CWH2D");
				if (n == 2)
					kmsn.kms("N2KJX-J94YW-TQVFB-DG9YT-724CC");
				if (n == 3)
					kmsn.kms("WMDGN-G9PQG-XVVXX-R3X43-63DFG");
				if (n == 4)
					kmsn.kms("N69G4-B89J2-4G8F4-WWYCC-J464C");
				if (n == 5)
					kmsn.kms("WVDHN-86M7X-466P6-VHXV7-YY726");
				if (n == 6)
					kmsn.kms("CB7KF-BWN84-R7R2Y-793K2-8XDDG");
				if (n == 7)
					kmsn.kms("WC2BQ-8NRM3-FDDYY-2BFGV-KHKQY");
				if (n == 8)
					kmsn.kms("JCKRF-N37P4-C2D82-9YXRT-4M63B");
				printDone();
				Sleep(3100);
			}
		}
		if (c == '5')
		{
			int n;
			printPageKMS();
			cin >> n;
			kmsn.setKMS(n);
		}
		if (c == '6')
		{
			char c1;
			printYesNo();
			c1 = _getch();
			if (c1 == 'y' || c1 == 'Y')
				kmsn.resetUPK();
		}
	}
	return 0;
}