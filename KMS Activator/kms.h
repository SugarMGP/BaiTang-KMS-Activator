#pragma once

class KMS
{
	public:
		char server[1001] = "kms.03k.org";
		void kms(const char key[101]);
		void setKMS(int n);
		void resetUPK();
};