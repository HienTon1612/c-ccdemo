#include <stdio.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
 while (true){
 	int choice;
 printf("***** CAC LUA CHON *****\n");
 printf("1. Tong hai so la:\n ");
 printf("2. Hieu hai so la:\n");
 printf("3. Tich hai so la:\n");
 printf("4. Thuong hai so la:\n");
 printf("5. Moi ban nhap lai\n");
 scanf("%d", &choice);
  int a, b;
  switch (choice){
  case 1:
    printf("Plus two number\n");
    printf("Please iput number A = ");
    scanf("%d", &a);
    printf("Please iput number B = ");
    scanf("%d", &b);
    printf("Your result is: %d\n", a + b);
    break;
  case 2:
    printf("Minus two number\n");
    printf("Please iput number A = ");
    scanf("%d", &a);
    printf("Please iput number B = ");
    scanf("%d", &b);
    printf("Your result is: %d\n", a - b);
    break;
 case 3:
    printf("Multiply two number\n");
    printf("Please iput number A = ");
    scanf("%d", &a);
    printf("Please iput number B = ");
    scanf("%d", &b);
    printf("Your result is: %d\n", a * b);
    break;
 case 4:
    printf("Divide two number\n");
    printf("Please iput number A = ");
    scanf("%d", &a);
    printf("Please iput number B = ");
    scanf("%d", &b);
    float c;
	c=a/b;
	printf("Your result is: %f\n", c);
    break;
	if(b==0){
    	printf("Please input a valid number.\n");
	if(choice== 5){
   break;
   }
}
}
}
}


