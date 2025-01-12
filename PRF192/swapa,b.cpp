#include<stdio.h>

int main(){
	int a,b;
	int i;
	printf("nhap 2 so a va b :");
	scanf("%d%d",&a,&b);
	i=a;
	a=b;
	b=i;
	printf(" gia tri cau 2 so a b sau khi swap la : a=%d\nb=%d\n", a,b);
	
}