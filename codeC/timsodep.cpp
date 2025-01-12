#include<stdio.h>

int main(){
    int a;
    int b;
    int start = a, end = b;
    printf("nhap so a va b :");
    scanf("%d",&a,&b);
    for(int i=start;i<=end;i++){
    printf("%d\n",i);
    }
    printf("so luong so nguyen trong doan a toi b la :%d\n ",start,end);
}