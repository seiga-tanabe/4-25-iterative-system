// iterative system.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
    int t = (int)time(nullptr);
    int answer =  t % 10;
	printf("デバッグ用:正解""%d\n", answer);
    bool Gameclear = false;

    while(!Gameclear)
    {
        int input;
        printf("0~9の数字を入力してください\n");
        scanf_s("%d", &input);

        int rank = 0;
        if (input == answer)
        {
            rank = 2;
            printf("正解！\n");
            Gameclear = true;
        }
        else if(input > answer)
        {
            printf("大きすぎます！\n");
        }
        else if(input < answer)
        {
            printf("小さすぎます！\n");
        }
		int sub = answer - input;

        if(sub > - 3&& sub < 3 && sub != 0)
        {
            rank = 1;
			printf("惜しい！\n");
		}


        switch (rank)
        {
        case 2 : 
            printf("ランクS!\n");
			break;
        case 1:
			printf("ランクA!\n");
            break;
        default:
			printf("ランクB!\n");
            break;
        }
        if(!Gameclear)
        {
            printf("もう一度！\n");
		}
        else
        {
            printf("ゲームクリア！\n");
        }
    }
	return 0;
}

