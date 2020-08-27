#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main() {

	char ch;
	
     do
     {
     int year;
     printf("Enter year \n");
     scanf("%d", &year);
     if(year<1000 || year >9999){
     	printf("Invalide entry ! \n");
     	
		 }
     
	 else{
	 	if(year%400==0)
	 	printf("This is leap year \n");
	 	else if(year%100==0)
	 	printf("This is not leap year \n");
	 	else if(year%4==0)
	 	printf("This is leap year \n");
	 	else
	 	printf("This is not leap year \n");
	 }
	 
	 printf("Do you want to continue press y :");
    scanf(" %c", &ch);
}while(ch == 'Y' || ch == 'y');
}
