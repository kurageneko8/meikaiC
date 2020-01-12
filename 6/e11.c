#include<stdio.h>

int search(const int v[], int idx[], int key, int n)
{
    int i;
    int j = 0;
    for ( i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            idx[j]= i;
            j++;
        }
        
    }

    for ( i = 0; i < j; i++)
    {
        printf("idx[%d] = %d\n", i, j);
    }
    
    
    return j;
}

int main(int argc, char const *argv[])
{
    int i;
    int n;
    int key;
    int idx[n];// 探す数があったインデックスと同じ数字を入れる配列
    int hitNum;

    printf("num of element:");
    scanf("%d", &n);
    int v[n];// この配列の中から探す

    for ( i = 0; i < n; i++)
    {
        printf("v[%d]:", i);
        scanf("%d", &v[i]);
    }

    printf("num to search:");
    scanf("%d", &key);

    hitNum = search(v, idx, key, n);

    printf("count of hit number:%d\n", hitNum);

    return 0;
}
