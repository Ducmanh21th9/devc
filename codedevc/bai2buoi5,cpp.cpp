#include <stdio.h>
int main(){
	int n;
	int i;
	int o;
	printf("nhap gia tri cua n: ");
	scanf("%d", &n);
	o = n % 10;
	while(n>=10){
		n/=10;
	}
	i = n;
	
	printf("chu so dau tien la : %d\n",i);
	printf("chu so coi cung la : %d\n", o);
}
