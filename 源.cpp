#include<stdio.h>
#include<stdlib.h>
double g(int i, int j);
void f1(int a);          //����ս�����������ܲ�������
void f2(int a);          //����ս����������ѯ
void f3(int a);          //��һս�������ܲ�ѯ
void f4(int a);          //��һ��������
int main()
{
	int a;
	printf("      ����ս�����ܲ���\n");
	printf("����ս�����������ܲ�������......1\n����ս����������ѯ..............2\n��һս�������ܲ�ѯ..............3\n��һ��������....................4\n������ѯ........................5\n");
	for (;;)
	{
		scanf("%d", &a);
		switch (a)
		{
		case 1: {f1(a); break; }
		case 2: {f2(a); break; }
		case 3: {f3(a); break; }
		case 4: {f4(a); break; }
		case 5:return 0;
		}
		system("pause");
		system("cls");
		printf("����ս�����������ܲ�������......1\n����ս����������ѯ..............2\n��һս�������ܲ�ѯ..............3\n��һ��������....................4\n������ѯ........................5\n");
	}
	return 0;
}
double g(int i, int j) {
	double d[5][8] = { {22.28,5.92,15,2.94,20,3500,1000,0.8},{17.48,5.55,10.40,2.99,1.89,2340,1345,0.09},{34.8,9.85,32.989,992,1.28,5760,2500,0.3},{16.43,5.43,9.73,2340,18,3200,1250,6.6},{21.9,5.93,14.7,2876,18.5,3790,1500,8} };
	return d[i][j];
}
void f1(int a) {
	int i, j, m;
	printf("\n�ɻ��ͺ�    ����        �����          ��չ  �������ٶ�  �����и߶�          ����      ��ս�뾶        �ص���\n                 m             m             m          km/h            km            km            km             t\n");
	for (i = 0, m = 10; i < 5; i++, m++)
	{
		if (m < 13) printf("��%d", m);
		else if (m == 13) printf("�� 6");
		else printf("��15");
		for (j = 0; j < 8; j++)
		{
			printf("%14.2f", g(i, j));
			if (j == 7) printf("\n");
		}
	}
	printf("\n");
}
void f2(int a)
{
	int m, i, j;
	printf("��10............................1\n��11............................2\n��12............................3\n�� 6............................4\n��15............................5\n");
	scanf("%d", &m);
	printf("�ɻ��ͺ�    ����        �����          ��չ  �������ٶ�  �����и߶�          ����      ��ս�뾶        �ص���\n                 m             m             m          km/h            km            km            km             t\n");
	switch (m)
	{
	case 1: {i = 0, j = 0;
		printf("��10");
		for (j = 0; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	case 2: {i = 1, j = 0;
		printf("��11");
		for (j = 0; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	case 3: {i = 2, j = 0;
		printf("��12");
		for (j = 0; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	case 4: {i = 3, j = 0;
		printf("�� 6");
		for (j = 2; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	case 5: {i = 4, j = 0;
		printf("��15");
		for (j = 0; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	}
	printf("\n\n");
}
void f3(int a)
{
	int m, i, j;
	printf("����..........................1\n�����..........................2\n��չ............................3\n�������ٶ�....................4\n�����и߶�....................5\n����............................6\n��ս�뾶........................7\n�ص���..........................8\n");
	scanf("%d", &m);
	switch (m)
	{
	case 1: {printf("                   ��10          ��11          ��12           ��6          ��15\n");
		printf("����(m)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 2: {printf("                   ��10          ��11          ��12           ��6          ��15\n");
		printf("�����(m)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 3: {printf("                 ��10          ��11          ��12           ��6          ��15\n");
		printf("��չ(m)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 4: {printf("                            ��10          ��11          ��12           ��6          ��15\n");
		printf("�������ٶ�(km/h)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 5: {printf("                          ��10          ��11          ��12           ��6          ��15\n");
		printf("�����и߶�(km)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 6: {printf("                  ��10          ��11          ��12           ��6          ��15\n");
		printf("����(km)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 7: {printf("                      ��10          ��11          ��12           ��6          ��15\n");
		printf("��ս�뾶(km)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 8: {printf("                   ��10          ��11          ��12           ��6          ��15\n");
		printf("�ص���(t)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	}
	printf("\n\n");
}
void f4(int a)
{
	int m, i, j, c;
	double b = 0.0, w[5];
	printf("����..........................1\n�����..........................2\n��չ............................3\n�������ٶ�....................4\n�����и߶�....................5\n����............................6\n��ս�뾶........................7\n�ص���..........................8\n");
	scanf("%d", &m);
	switch (m)
	{
	case 1:printf("�ɻ��ͺ�              ����(m)\n"); break;
	case 2:printf("�ɻ��ͺ�              �����(m)\n"); break;
	case 3:printf("�ɻ��ͺ�                ��չ(m)\n"); break;
	case 4:printf("�ɻ��ͺ�     �������ٶ�(km/h)\n"); break;
	case 5:printf("�ɻ��ͺ�       �����и߶�(km)\n"); break;
	case 6:printf("�ɻ��ͺ�               ����(km)\n"); break;
	case 7:printf("�ɻ��ͺ�           ��ս�뾶(km)\n"); break;
	case 8:printf("�ɻ��ͺ�              �ص���(t)\n"); break;
	}
	for (i = 0; i < 5; i++)
		w[i] = g(i, m - 1);
	for (i = 3; i >= 0; i--)
		for (j = 0; j <= i; j++)
			if (w[j] < w[j + 1])
			{
				b = w[j];
				w[j] = w[j + 1];
				w[j + 1] = b;
			}
	for (i = 0, c = 10; i < 5; i++, c++)
		for (j = 0; j < 5; j++)
			if (w[i] == g(j, m - 1))
			{
				if (c < 13) printf("��%d            ", c);
				else if (c == 13) printf("�� 6            ");
				else printf("��15            ");
				printf("%14.2f\n", w[i]);
			}
	printf("\n\n");
}