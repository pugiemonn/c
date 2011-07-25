#include <stdio.h>
int main (void)
{
    int n;
    printf("数字を入力してください：\n");
    scanf("%d", &n);
    if(n > 100)
    {
        printf("%dは大きい\n", n);
    }
    else
    {
        printf("%dは小さい\n", n);
    }
    return 0;
}
