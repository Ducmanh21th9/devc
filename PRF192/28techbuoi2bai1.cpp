#include<stdio.h>

int main(){
	int a,b,c;
	int sum;
	printf("nhap do dai cac canh");
	scanf("%d%d%d",&a,&b,&c);
	if(a>0 && b>0 && c>0){
	sum=4 * (a + b + c);
	printf("tong cac canh la :%d",sum);
}
	else{
		printf("cac gia tri la so nguyen duong");
	}
}