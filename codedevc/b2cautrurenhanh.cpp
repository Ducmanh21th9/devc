#include <stdio.h>
#include <math.h>
// cau truc re nhanh if else
//int main(){
	//int n;
//	scanf("%d", &n);
// test expresion , condition (dieu kien)
//	 if ((n >= 50) && (n<= 100))
//	 {
//	 	printf("N la so chan !");	
//	 }
//     else{
//    	printf(" khong phai nam nhuan");
//	 }     
//	return 0;
//}
//bai tap kien tra nam nhuan : chia het cho 400 hoac chia het cho 4 va khong chia het cho 100
int main(){
	int n;
	scanf("%d", &n);
	if((n % 400 == 0) || (n % 4 == 0  && n % 100 != 0)){
		printf(" nam nhuan ");
	}
	else{
		printf(" khong phai nam nhuan");
	}
	return 0;
}
