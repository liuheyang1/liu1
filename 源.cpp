#include<stdio.h>
#include<stdlib.h>
double g(int i, int j);
void f1(int a);          //国产战斗机所有性能参数总览
void f2(int a);          //国产战斗机参数查询
void f3(int a);          //单一战斗机性能查询
void f4(int a);          //单一性能排序
int main()
{
	int a;
	printf("      国产战机性能参数\n");
	printf("国产战斗机所有性能参数总览......1\n国产战斗机参数查询..............2\n单一战斗机性能查询..............3\n单一性能排序....................4\n结束查询........................5\n");
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
		printf("国产战斗机所有性能参数总览......1\n国产战斗机参数查询..............2\n单一战斗机性能查询..............3\n单一性能排序....................4\n结束查询........................5\n");
	}
	return 0;
}
double g(int i, int j) {
	double d[5][8] = { {22.28,5.92,15,2.94,20,3500,1000,0.8},{17.48,5.55,10.40,2.99,1.89,2340,1345,0.09},{34.8,9.85,32.989,992,1.28,5760,2500,0.3},{16.43,5.43,9.73,2340,18,3200,1250,6.6},{21.9,5.93,14.7,2876,18.5,3790,1500,8} };
	return d[i][j];
}
void f1(int a) {
	int i, j, m;
	printf("\n飞机型号    机身长        机身高          翼展  最大飞行速度  最大飞行高度          航程      作战半径        载弹量\n                 m             m             m          km/h            km            km            km             t\n");
	for (i = 0, m = 10; i < 5; i++, m++)
	{
		if (m < 13) printf("歼%d", m);
		else if (m == 13) printf("轰 6");
		else printf("歼15");
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
	printf("歼10............................1\n歼11............................2\n歼12............................3\n轰 6............................4\n歼15............................5\n");
	scanf("%d", &m);
	printf("飞机型号    机身长        机身高          翼展  最大飞行速度  最大飞行高度          航程      作战半径        载弹量\n                 m             m             m          km/h            km            km            km             t\n");
	switch (m)
	{
	case 1: {i = 0, j = 0;
		printf("歼10");
		for (j = 0; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	case 2: {i = 1, j = 0;
		printf("歼11");
		for (j = 0; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	case 3: {i = 2, j = 0;
		printf("歼12");
		for (j = 0; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	case 4: {i = 3, j = 0;
		printf("轰 6");
		for (j = 2; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	case 5: {i = 4, j = 0;
		printf("歼15");
		for (j = 0; j < 8; j++)
			printf("%14.2f", g(i, j)); break; }
	}
	printf("\n\n");
}
void f3(int a)
{
	int m, i, j;
	printf("机身长..........................1\n机身高..........................2\n翼展............................3\n最大飞行速度....................4\n最大飞行高度....................5\n航程............................6\n作战半径........................7\n载弹量..........................8\n");
	scanf("%d", &m);
	switch (m)
	{
	case 1: {printf("                   歼10          歼11          歼12           轰6          歼15\n");
		printf("机身长(m)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 2: {printf("                   歼10          歼11          歼12           轰6          歼15\n");
		printf("机身高(m)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 3: {printf("                 歼10          歼11          歼12           轰6          歼15\n");
		printf("翼展(m)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 4: {printf("                            歼10          歼11          歼12           轰6          歼15\n");
		printf("最大飞行速度(km/h)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 5: {printf("                          歼10          歼11          歼12           轰6          歼15\n");
		printf("最大飞行高度(km)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 6: {printf("                  歼10          歼11          歼12           轰6          歼15\n");
		printf("航程(km)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 7: {printf("                      歼10          歼11          歼12           轰6          歼15\n");
		printf("作战半径(km)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	case 8: {printf("                   歼10          歼11          歼12           轰6          歼15\n");
		printf("载弹量(t)");
		for (i = 0, j = 0; i < 5; i++)
			printf("%14.2f", g(i, j)); break; }
	}
	printf("\n\n");
}
void f4(int a)
{
	int m, i, j, c;
	double b = 0.0, w[5];
	printf("机身长..........................1\n机身高..........................2\n翼展............................3\n最大飞行速度....................4\n最大飞行高度....................5\n航程............................6\n作战半径........................7\n载弹量..........................8\n");
	scanf("%d", &m);
	switch (m)
	{
	case 1:printf("飞机型号              机身长(m)\n"); break;
	case 2:printf("飞机型号              机身高(m)\n"); break;
	case 3:printf("飞机型号                翼展(m)\n"); break;
	case 4:printf("飞机型号     最大飞行速度(km/h)\n"); break;
	case 5:printf("飞机型号       最大飞行高度(km)\n"); break;
	case 6:printf("飞机型号               航程(km)\n"); break;
	case 7:printf("飞机型号           作战半径(km)\n"); break;
	case 8:printf("飞机型号              载弹量(t)\n"); break;
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
				if (c < 13) printf("歼%d            ", c);
				else if (c == 13) printf("轰 6            ");
				else printf("歼15            ");
				printf("%14.2f\n", w[i]);
			}
	printf("\n\n");
}