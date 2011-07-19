#include <stdio.h>
void main() {
    int top,bottom,height,menseki;
    printf("台形の面積を求めます\n");
    printf("上底を入力:\n");
    scanf("%d",&top);
    printf("下底を入力:\n");
    scanf("%d",&bottom);
    printf("高さを入力:\n");
    scanf("%d",&height);
    menseki = (top + bottom) * height / 2;
    printf("面積は：%d です\n", menseki);
    //return 0;
}
