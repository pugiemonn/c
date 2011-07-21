#include <stdio.h>
int main(void)
{
    int x, y, z;
    scanf("%d%d",&x,&y);
    z = y;
    y = x;
    x = z;

    printf("%d%d",x,y);
    
    return 0;
}

