#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void correct()
{
	printf("정답입니다!\n");
	Sleep(1000);
	printf("프로그램이 종료됩니다.\n");
}
void notcorrect()
{
	printf("정답이 아닙니다.\n");
	Sleep(1000);	
}
void notcorrectend()
{
	printf("정답을 5번안에 맞추지 못하였습니다.\n");
	Sleep(1000);
	printf("프로그램이 종료됩니다.\n");
}

int main()
{
	srand(time(NULL));
	int k,output[2][10] = { 0, }, input1,input2, rnd1, rnd2;
	rnd1 = (rand() % 2)+1;
	rnd2 = (rand() % 10)+1;

	printf("보물 찾기!");
	Sleep(1000);
	printf("\n보물을 찾아보세요!\n");
	Sleep(1000);
	printf("총5번의 기회가 주어집니다.\n");
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
		printf("보물의 위치를 열(1~2)과 행(1~10)으로 입력해주세요!\n");
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