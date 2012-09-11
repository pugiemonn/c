#include <stdio.h>

int main()
{
    int var;
    
    printf("あなたは猫耳が好きですか?\n");
    printf("はい = 1\tいいえ = 2\tうさ耳がすき = 3\n");
    scanf("%d", &var);

    switch(var){
        case 1:
            printf("猫耳だよね\n");
            break;
        case 2:
            printf("ありえんこふ\n");
            break;
        case 3:
            printf("うさぎも悪くない\n");
            break;
        default:
            printf("指定した数字を入力してね\n");
    }
    return 0;
}
