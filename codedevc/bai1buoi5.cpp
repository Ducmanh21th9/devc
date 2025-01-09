#include <stdio.h>
int main(){
	int n;
	int i=0;
	while(n>0){
		n%10;
		i+=n/=10;
	}
	printf("nhap gia tri cua n: ");
	scanf("%d", &n);
	if(n>0){
		printf("1\n");
	}else{
		printf("0\n");
	}
}
