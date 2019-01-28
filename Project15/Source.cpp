#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>
void main()
{
	
	
	//task5
	/*int N = 15, S = 0;
	for (size_t i = 0; i < 5; i++)
	{
		printf("Ñêîëüêî ÿùèêîâ çàãðóçèòü  n- ìàøèíó?");
		scanf_s("%d", &S);
		if (S > N)
		{
			printf("Íåäîñòàòî÷íî òîâàðà!!!\n");
			S--;
		}
		else
		{
			N = N - S;
			printf("Îñòàëîñü ÿáëîê: %d\n", N);

		}

		if (N == 0)
		{
			printf("ßùèêîâ áîëüøå íå îñòàëîñü!!!\n");
			break;
		}
	}*/
	//task4
	//const int N = 10;
	//	int it = 0;
	//	int i, j, A[N] = {12,345,43,21,67,45,87,90,9,123}, c;
	//	for (size_t i = 0; i < N - 1; i++)
	//	{
	//
	//		for (j = N - 2; j >= i; j--)
	//		{
	//			if (A[j] > A[j + 1])
	//			{
	//				c = A[j];
	//				A[j] = A[j + 1];
	//				A[j + 1] = c;
	//				it++;
	//			}
	//		}
	//	}
	//	printf("\n Îòñîðòèðîâàííûé ìàññèâ:\n");
	//	for (size_t i = 0; i < N; i++)
	//	{
	//		printf("%d", A[i]);
	//	}
	//task3
	/*int A[12] = { 0 };
	int N = 0, S = 0;
	float Pl, Pl1;
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 9;
		N = N + A[i];
		printf("Íàñåëåíèå ëþäåé(â òûñ.) êàæäîãî ðàéîíà:%d\n", N);
	}
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 23;
		S = S + A[i];
		printf("Ïëîùàäü (â êì^2) êàæäîãî ðàéîíà:%d\n", S);
	}
	Pl = (float)N / S;
	Pl1 = (float)Pl / 12;
	printf("Ñðåäíÿÿ ïëîòíîñòü ïî 12 ðàéîíàì:%f\n", Pl1);*/


	//task2
	/*int A[28] = { 0 };
	int Sr1 = 0, Sr2 = 0;
	float N1, N2;
	for (size_t i = 0; i < 28; i++)
	{
		A[i] = 2 + rand() % 3;
		printf("Ðåçóëüòàòû ó÷åíèêîâ ïåðâîãî êëàññà:%d\n", A[i]);
	}
	for (size_t i = 0; i < 28; i++)
	{
		Sr1 = Sr1 + A[i];
	}
	for (size_t i = 0; i < 28; i++)
	{
		A[i] = 2 + rand() % 3;
		printf("Ðåçóëüòàò ó÷åíèêîâ âòîðîãî êëàññà:%d\n", A[i]);
	}
	for (size_t i = 0; i < 28; i++)
	{
		Sr2 = Sr2 + A[i];
	}
	N1 = (float)Sr1 / 28;
	N2 = (float)Sr2 / 28;
	printf("Ñðåäíèé áàëë ïåâðîãî êëàññà:%f\n", N1);
	printf("Ñðåäíèé áàëë âòîðîãî êëàññà:%f\n", N2);*/

	//task 1
	/*int A[5] = { 0 };
	int S1, S2;
	for (size_t i = 0; i < 5; i++)
	{
		A[i] = 1 + rand() % 10;
		S1 = 0;
		printf("Ðåçóëüòàò ïåðâîãî áîðöà çà èñïûòàíèÿ:%d\n", A[i]);
	}
	for (size_t i = 0; i < 5; i++)
	{
		S1 = S1 + A[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		A[i] = 1 + rand() % 10;
		S2 = 0;
		printf("Ðåçóëüòàò âòîðîãî áîðöà çà èñïûòàíèÿ:%d\n", A[i]);
	}
	for (size_t i = 0; i < 5; i++)
	{
		S2 = S2 + A[i];
	}
	printf("Ñóììà áàëëîâ ïåðâîãî áîðöà:%d\n", S1);
	printf("Ñóììà áàëëîâ âòîðîãî áîðöà:%d\n", S2);*/


	system("pause");
}