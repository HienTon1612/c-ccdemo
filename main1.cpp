#include <iostream>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
 while (true){
 int a;
 int b;
 printf("***** CAC LUA CHON *****");
 printf("1. Tong hai so la:\n ");
 printf("2. Hieu hai so la:\n");
 printf("3. Tich hai so la:\n");
 printf("4. Thuong hai so la:\n");
 printf("5. Moi ban nhap lai\n");
 printf("Nhap a la:");
 printf("Nhap b la:");
 scanf("%i%i, &a&b");
  switch (a){
   case 1:
    scanf("%i%i, &a&b");
    printf("Tong hai so: %i + %i = %i", a, b, a + b);
    break;
   case 2: 
   printf("Hieu hai so: %i -%i = %i",a, b, a - b);
   break;
   case 3: 
   printf("Tich hai so: %i  %i = %i", a, b, a * b);
   break;
   case 4: 
   if(b!=0);
	printf("Thuong hai so: %i / %i = %i",a, b, a / b);
   case 5:
   printf("Moi ban nhap lai");
   break;
   if(a == 5){
   break;
   }
   return 0;
}
}
}

