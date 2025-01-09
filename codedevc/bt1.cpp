#include <stdio.h>
int main(){
	int x , s;
	printf("nhap x :");
	scanf("%d", &x);
	s= x*x*x + 3*x*x + x + 1;
	printf("ket qua la :%d", s);
	return 0;
}