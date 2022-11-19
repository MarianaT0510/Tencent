#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int jkxt()
{
	int a = 0; char sfz[19];
	printf("请输入您的身份证号:");
	gets(sfz);
	a = (sfz[6] - 48) * 1000 + (sfz[7] - 48) * 100 + (sfz[8] - 48) * 10 + (sfz[9] - 48);
	if ((2022 - a) >= 18)
	{
		printf("您已实名认证为成年人。\n");
		Sleep(2000);
		system("cls");
		return 1;
	}
	else
	{
		printf("您已实名认证为未成年人，限额300元。\n");
		Sleep(2000);
		system("cls");
		return 0;
	}
}