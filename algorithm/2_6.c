#include <stdio.h>
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    
    printf("加算の結果は%d\n", x+y);
    printf("減算の結果は%d\n", x-y);
    printf("乗算の結果は%d\n", x*y);
    printf("除算の結果は%d\n", x/y);
}
