#include <stdio.h>

int main()
{
    char ch;
    
    printf("半角英数で１文字入力してください\n");
    scanf("%c", &ch);

    if(ch == 'X') printf("X感じてみろ\n");
    else printf("パスワードが違います\n");
}
