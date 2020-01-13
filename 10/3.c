#include<stdio.h>
int main(void) {
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;

    int *isako, *hiroko;

    isako = &sato;// isako reffer sato;
    hiroko = &masaki;// hiroko reffer masaki;
    
    isako = &sanaka;// isako reffer sanaka
    *hiroko = 180;

    putchar('\n');
    printf("sato's hight:%d\n", sato);
    printf("sanaka's hight:%d\n", sanaka);
    printf("masaki's hight:%d\n", masaki);
    printf("isako's lover's hight:%d\n", *isako);
    printf("hiroko's lover's hight:%d\n", *hiroko);
    
    return 0;
}