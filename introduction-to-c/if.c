#include <stdio.h>

int main()
{
    int var1, var2;
    
    printf("2つの数字を比較します。\n数字を入力してください\n");
    scanf("%d", &var1);
    printf("２つ目の数字を入力してください\n");
    scanf("%d", &var2);

    if(var1 < var2) printf("%d は %d より小さいです\n", var1, var2);
    if(var1 > var2) printf("%d は %d より大きいです\n", var1, var2);
    if(var1 == var2) printf("%d は %d と等しいです\n", var1, var2);
    
    return 0;
}
