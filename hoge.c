#include <stdio.h>
int main(void)
{
    int hoge = 10;
    hoge = 1 + rand()%6;
    printf("aaa%d\n", hoge);
    return 0;
}
