// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//int answer = 5;
	int t = (int)time(nullptr);
	int answer = t % 10;
	bool gameClear = false;
	while (!gameClear)
	{
		printf("ゲーム開始！\n数字を入力してください!-----\n");

		int input;
		scanf_s("%d", &input);

		int rank = 0;

		int sub = answer - input;
		bool same = answer == input;

		if (same)
		{
			rank = 2;
			printf("%d\n", answer);
			printf("一致!\n");
		}
		else if (sub > -3 && sub < 3)
		{
			rank = 1;
			printf("惜しい!\n");
		}
		if (answer < input)
		{
			printf("小さい!\n");
		}
		else if (answer > input)
		{
			printf("大きい!\n");
		}

		switch (rank)
		{
		case 2:
			printf("ランクS\n");
			gameClear = true;
			break;
		case 1:
			printf("ランクA\n");
			break;
		default:
			printf("ランクB\n");
			break;
		}
		if (!gameClear)
		{
			printf("もう一回!");
		}
		else
		{
			printf("ゲームクリア!");
		}
	}

	return 0;
}
