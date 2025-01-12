#include<stdio.h>
void MENU(){
    printf("===MENU===\n");
    printf("1.option 1: Say HELLO\n");
    printf("2.option 2: Add two number\n");
    printf("3.option 3: Exit\n");
    printf("==============\n");
    printf("enter your choice: ");

}
void sayhello(){
    printf("Hello User!\n");
}
void addtwonumber(){
    int num1,num2;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    printf("the number is: %d\n", num1+num2);

}
int main(){
    int choice;
    while(1){
        MENU();
        scanf("%d", &choice);

        switch(choice){
            case 1:
            sayhello();
            break;
            case 2:
            addtwonumber();
            break;
            case 3:
            printf("Exiting the program.Goodbye\n");
            return 0;
            default:
            printf("invalid choice . try again.\n");
        }
    }
    return 0;
}