#include <stdio.h>
#include <Windows.h>
#include"������.h"
#include"����ϵͳ.h"
#include"��ֵ����.h"
#pragma warning(disable:4996)
float b=0;float e=0,h=0;
void tx(float a)
{
	system("cls");
	printf("�����ڵ����Ϊ��%.2f",b);
	Sleep(2000);
	system("cls"); 
	printf("���������ֽ�");
	scanf("%f",&e);
	if(b<e)
		printf("���㣬���ȳ�ֵ��"); 
	else 
		printf("���ֳɹ���\n�����ֺ�����Ϊ��%.2f\n",b=b-e);
}
void cz(float a)
{
	system("cls");
	printf("�������ֵ��\n");
	scanf("%f",&e);
	b+=e; 
	h+=e;
	printf("��ֵ�ɹ���\n����ֵ������Ϊ��%.2f\n",b);
}
void ye(float a)
{
	system("cls");
	printf("�������Ϊ��%.2f\n",b);
}
void jg(float a)
{
	int c; 
	czjm();
	scanf("%d",&c);
	if(c==1)
	{
		printf("������Ҫ��ֵ�ĵㄻ������");
		scanf("%f",&e);
		if(b<e)
			printf("���㣬���ȳ�ֵ��"); 
		else 
			{printf("��ֵ�ɹ���\n����ֵ������Ϊ��%.2f\n",b=b-e/10.0);
		h+=e;
			}
	}
	else if(c==2)
	{
		printf("������Ҫ��ֵ�ĵㄻ������");
		scanf("%f",&e);
		if(b<e)
			printf("���㣬���ȳ�ֵ��"); 
		else 
			{
			printf("��ֵ�ɹ���\n����ֵ������Ϊ��%.2f\n",b=b-e/10.0);
			h+=e;
			}
	}
	else if(c==3)
	{
		printf("������Ҫ��ֵ����ʯ������");
		scanf("%f",&e);
		if(b<e)
			printf("���㣬���ȳ�ֵ��"); 
		else 
			{printf("��ֵ�ɹ���\n����ֵ������Ϊ��%.2f\n",b=b-e/10.0);
			h+=e;
			}
	}
	else if(c==4)
	{
		printf("������Ҫ��ֵ�ĵㄻ������");
		scanf("%f",&e);
		if(b<e)
			printf("���㣬���ȳ�ֵ��"); 
		else 
			{printf("��ֵ�ɹ���\n����ֵ������Ϊ��%.2f\n",b=b-e/10.0);
			h+=e;
			}
	}
}
void Qb(float a)
{int q;
system("cls");
	printf("���Q����");
	Sleep(2000);
	system("cls");
	printf("��������Ҫ��ֵ��Q��������");
	scanf("%f",&e);
	printf("��������Ҫ��ֵ��QQ�ţ�");
	scanf("%d",&q);
	if(b<e)
		printf("���㣬���ȳ�ֵ��"); 
	else 
		{
			printf("����Ϊ�˺ţ�%d��ֵ�ɹ���\n����ֵ������Ϊ��%.2f\n",q,b=b-e);
		h+=e;
		}
}
main()
{
	int a=0,c;
	zjm();
	c=jkxt();
	if(c==0)
	{
		for(;a!=6;)
	{
	system("cls");
	zcd();
	scanf("%d",&a);
	if(a==1)
		ye(b);
		if(h>=300)
		{
			system("cls");
			printf("���ѵ������ƶ�ȣ������˳���");
			Sleep(2000);
			system("cls");
			break; 
		}
	else if(a==2)
		cz(b);
		if(h>=300)
		{
			system("cls");
			printf("���ѵ������ƶ�ȣ������˳���");
			Sleep(2000);
			system("cls");
			break; 
		}
	else if(a==3)
		jg(b);
		if(h>=300)
		{
			system("cls");
			printf("���ѵ������ƶ�ȣ������˳���");
			Sleep(2000);
			system("cls");
			break; 
		}
	else if(a==4)
		tx(b);
		if(h>=300)
		{
			system("cls");
			printf("���ѵ������ƶ�ȣ������˳���");
			Sleep(2000);
			system("cls");
			break; 
		}
	else if(a==5)
		Qb(b);
		if(h>=300)
		{
			system("cls");
			printf("���ѵ������ƶ�ȣ������˳���");
			Sleep(2000);
			system("cls");
			break; 
		}
	Sleep(2000);
	system("cls"); 
	}
	printf("���������˳������Ժ󡭡�");
	Sleep(5000);
	system("cls");
	printf("��л����ʹ�ã���Ѷ��˾ף��������죡\n"); 
	Sleep(2000);
	printf("�밴�س����˳���"); 
	}
	else
	{
		for(;a!=6;)
		{
			zcd();
		scanf("%d",&a);
		if(a==1)
			ye(b);
		else if(a==2)
			cz(b);
		else if(a==3)
			jg(b); 
		else if(a==4)
			tx(b);
		else if(a==5)
			Qb(b); 
		Sleep(2000);
		system("cls"); 
		}
		printf("���������˳������Ժ󡭡�");
		Sleep(5000);
		system("cls");
		printf("��л����ʹ�ã���Ѷ��˾ף��������죡\n"); 
		Sleep(2000);
		printf("�밴�س����˳���"); 
	}
}
