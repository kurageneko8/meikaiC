#include<stdio.h>

void hiroko(int *height)
{
    if (*height < 180)
    {
        *height = 180;
    }
    
}

int main() {
    int sato      = 178;
    int sanaka    = 175;
    int masaki    = 179;

    hiroko(&masaki);

    printf("sato's hight:%d\n", sato);
    printf("sanaka's hight:%d\n", sanaka);
    printf("masaki's hight:%d\n", masaki);
    
    return 0;
}