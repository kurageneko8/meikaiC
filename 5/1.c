#include<stdio.h>
int main(int argc, char const *argv[])
{
    int uchida;
    int satoh;
    int sanaka;
    int hiraki;
    int masaki;
    int sum = 0;

    printf("input 5 people's point\n");

    printf("1th:");
    scanf("%d", &uchida);
    sum += uchida;

    printf("2th:");
    scanf("%d", &satoh);
    sum += satoh;

    printf("3th:");
    scanf("%d", &sanaka);
    sum += sanaka;

    printf("4th:");
    scanf("%d", &hiraki);
    sum += hiraki;

    printf("5th:");
    scanf("%d", &masaki);
    sum += masaki;

    printf("sum: %5d\n", sum);
    printf("average: %5.1f\n", (double)sum / 5);
    
    return 0;
}
