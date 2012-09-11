#include <stdio.h>

int main()
{
    int count;
    int max;

    printf("ループ回数を指定してください\n");
    scanf("%d", &max);

    for (count = 1; count <= max; count++)
    {
        printf("%d回目のループです\n", count);
        if(count == 5000)
        {
            printf("5000回を越えたので強制終了します\n");
            count = max;
        }
    }
    printf("ループを抜けました\n");
    return 0;
}
