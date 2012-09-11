#include <stdio.h>

int main()
{
    int var;
    
    do {
        printf("値を入力してください\n");
        scanf("%d", &var);
        if((var <= 0) || (var >= 10000))
        {
            printf("不正な値です\n");
            continue;
        }
        printf("入力を受け付けました\n");
        break;
    } while(1);
    return 0;
}
