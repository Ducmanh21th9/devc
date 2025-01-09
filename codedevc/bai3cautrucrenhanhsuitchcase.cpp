#include <stdio.h>
 // bai 3 cau truc re nhanh switch case ( tu tuong if else )
 // thang 1 - thang 3
 int main(){
// 	int n;
//	 scanf("%d", &n);
//	 switch(n){
//	 	case 1:
//	 		printf(" 30 ngay");
//	 		break;
//	 	case 2:
//	 		printf(" 28 ngay ");
//	 		break;
//	 	case 3:
//		 	printf(" 30 ngay ");
//		 	break;
//		 default :
//		 	printf("du lieu khong hop le");	 
//	 } 
// btap

	  int a = 200 , b=300;
	  char kitu;
	  scanf("%c", &kitu);
	  switch(kitu){
	  	case '+':
	  		printf("%d", a+b);
	  		break;
	  	case '-':
		  printf("%d", a-b);
		  break;
		case '*':
			printf("%d", a*b);
			break;
		case '/':
			printf("%d", a/b);
			break;
		default :
			printf("du lieu khong hop le");
		  	
	  }
 } 
