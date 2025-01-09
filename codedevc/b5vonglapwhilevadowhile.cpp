#include <stdio.h>
//vong lap while va do while
// form: while(test expression){
               //code
//}
int main(){
	//int i=1;
//	while(i<=10){
//		printf("%d ", i);
//		i++;
//	}
//	printf("\n");
//	printf("gia tri cua bien sau vong lap while : %d",i);
//*btap dem so nguyen cua 12345
//int n;
//scanf("%d", &n);
//int ans=0;// dem so luong chu so
//while(n!=0){
//	++ans;// tang so luong chu so cua n len 1 don vi
//	n/=10; 
//}	
//printf("%d", ans);
//printf("\ngia tri cua n sau vong lap : %d", n);
// tinh tong cac chu so
int n;
scanf("%d", &n);
int sum=0;// dem so luong chu so
while(n!=0){
	sum +=n% 10;// cong chu so hang don vi vao sum
	n/=10; 
}	
printf("%d", sum);
printf("\ngia tri cua n sau vong lap : %d", n);
}
