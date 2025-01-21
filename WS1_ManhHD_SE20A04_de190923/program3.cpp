#include<stdio.h>
//program3
int main(){
    int S = 0;
    int x;

    do {
        printf("nhap vao so nguyen : ");
        scanf("%d", &x);
        if (x != 0) {
            S += x;
        }
    } while (x != 0);

    printf("tong cac so nguyen da nhap la : %d\n", S);

    return 0;
}
