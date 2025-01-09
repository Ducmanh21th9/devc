#include<stdio.h>
 int main(){
 	int a,b,c;
 	int sum;
 	printf("nhap 3 so a b c : ");
 	scanf("%d%d%d",&a,&b,&c);
    sum=a*(b+c)+b*(a+c);
    printf("tong 3 so nguyen duong la : %d",sum);
 	
 	return 0;
 }