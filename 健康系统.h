#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int jkxt()
{
	int a = 0; char sfz[19];
	printf("�������������֤��:");
	gets(sfz);
	a = (sfz[6] - 48) * 1000 + (sfz[7] - 48) * 100 + (sfz[8] - 48) * 10 + (sfz[9] - 48);
	if ((2022 - a) >= 18)
	{
		printf("����ʵ����֤Ϊ�����ˡ�\n");
		Sleep(2000);
		system("cls");
		return 1;
	}
	else
	{
		printf("����ʵ����֤Ϊδ�����ˣ��޶�300Ԫ��\n");
		Sleep(2000);
		system("cls");
		return 0;
	}
}