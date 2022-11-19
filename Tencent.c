#include <stdio.h>
#include <Windows.h>
#include"主界面.h"
#include"健康系统.h"
#include"充值界面.h"
#pragma warning(disable:4996)
float b=0;float e=0,h=0;
void tx(float a)
{
	system("cls");
	printf("您现在的余额为：%.2f",b);
	Sleep(2000);
	system("cls"); 
	printf("请输入提现金额：");
	scanf("%f",&e);
	if(b<e)
		printf("余额不足，请先充值！"); 
	else 
		printf("提现成功！\n您提现后的余额为：%.2f\n",b=b-e);
}
void cz(float a)
{
	system("cls");
	printf("请输入充值金额：\n");
	scanf("%f",&e);
	b+=e; 
	h+=e;
	printf("充值成功！\n您充值后的余额为：%.2f\n",b);
}
void ye(float a)
{
	system("cls");
	printf("您的余额为：%.2f\n",b);
}
void jg(float a)
{
	int c; 
	czjm();
	scanf("%d",&c);
	if(c==1)
	{
		printf("请输入要充值的点劵数量：");
		scanf("%f",&e);
		if(b<e)
			printf("余额不足，请先充值！"); 
		else 
			{printf("充值成功！\n您充值后的余额为：%.2f\n",b=b-e/10.0);
		h+=e;
			}
	}
	else if(c==2)
	{
		printf("请输入要充值的点劵数量：");
		scanf("%f",&e);
		if(b<e)
			printf("余额不足，请先充值！"); 
		else 
			{
			printf("充值成功！\n您充值后的余额为：%.2f\n",b=b-e/10.0);
			h+=e;
			}
	}
	else if(c==3)
	{
		printf("请输入要充值的钻石数量：");
		scanf("%f",&e);
		if(b<e)
			printf("余额不足，请先充值！"); 
		else 
			{printf("充值成功！\n您充值后的余额为：%.2f\n",b=b-e/10.0);
			h+=e;
			}
	}
	else if(c==4)
	{
		printf("请输入要充值的点劵数量：");
		scanf("%f",&e);
		if(b<e)
			printf("余额不足，请先充值！"); 
		else 
			{printf("充值成功！\n您充值后的余额为：%.2f\n",b=b-e/10.0);
			h+=e;
			}
	}
}
void Qb(float a)
{int q;
system("cls");
	printf("你充Q币吗？");
	Sleep(2000);
	system("cls");
	printf("请输入你要充值的Q币数量：");
	scanf("%f",&e);
	printf("请输入您要充值的QQ号：");
	scanf("%d",&q);
	if(b<e)
		printf("余额不足，请先充值！"); 
	else 
		{
			printf("您已为账号：%d充值成功！\n您充值后的余额为：%.2f\n",q,b=b-e);
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
			printf("您已到达限制额度，即将退出。");
			Sleep(2000);
			system("cls");
			break; 
		}
	else if(a==2)
		cz(b);
		if(h>=300)
		{
			system("cls");
			printf("您已到达限制额度，即将退出。");
			Sleep(2000);
			system("cls");
			break; 
		}
	else if(a==3)
		jg(b);
		if(h>=300)
		{
			system("cls");
			printf("您已到达限制额度，即将退出。");
			Sleep(2000);
			system("cls");
			break; 
		}
	else if(a==4)
		tx(b);
		if(h>=300)
		{
			system("cls");
			printf("您已到达限制额度，即将退出。");
			Sleep(2000);
			system("cls");
			break; 
		}
	else if(a==5)
		Qb(b);
		if(h>=300)
		{
			system("cls");
			printf("您已到达限制额度，即将退出。");
			Sleep(2000);
			system("cls");
			break; 
		}
	Sleep(2000);
	system("cls"); 
	}
	printf("程序正在退出，请稍后……");
	Sleep(5000);
	system("cls");
	printf("感谢您的使用，腾讯公司祝您生活愉快！\n"); 
	Sleep(2000);
	printf("请按回车键退出…"); 
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
		printf("程序正在退出，请稍后……");
		Sleep(5000);
		system("cls");
		printf("感谢您的使用，腾讯公司祝您生活愉快！\n"); 
		Sleep(2000);
		printf("请按回车键退出…"); 
	}
}
