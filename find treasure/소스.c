#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void correct()
{
	printf("�����Դϴ�!\n");
	Sleep(1000);
	printf("���α׷��� ����˴ϴ�.\n");
}
void notcorrect()
{
	printf("������ �ƴմϴ�.\n");
	Sleep(1000);	
}
void notcorrectend()
{
	printf("������ 5���ȿ� ������ ���Ͽ����ϴ�.\n");
	Sleep(1000);
	printf("���α׷��� ����˴ϴ�.\n");
}

int main()
{
	srand(time(NULL));
	int k,output[2][10] = { 0, }, input1,input2, rnd1, rnd2;
	rnd1 = (rand() % 2)+1;
	rnd2 = (rand() % 10)+1;

	printf("���� ã��!");
	Sleep(1000);
	printf("\n������ ã�ƺ�����!\n");
	Sleep(1000);
	printf("��5���� ��ȸ�� �־����ϴ�.\n");
	Sleep(1000);
	for (k = 1; k <= 5; k++)
	{
		for (int i = 1; i <=2; i++)
		{
			for (int j = 1; j <=10; j++)
			{
				
				printf("%d ", output[i-1][j-1]);
			}
			printf("\n");
		}
		Sleep(1000);
		printf("������ ��ġ�� ��(1~2)�� ��(1~10)���� �Է����ּ���!\n");
		scanf("%d %d", &input1, &input2);
		if (input1 == rnd1 && input2 == rnd2)
		{
			
			correct();
			break;
		}
		else
		{
			notcorrect();
			output[input1 - 1][input2 - 1] = 1;
		}


	}
	if (k == 6)
	{
		notcorrectend();
	}
}