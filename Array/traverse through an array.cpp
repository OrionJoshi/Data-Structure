//program to traverse through an array
#include<stdio.h>
#include<conio.h>

int main( void){
	
	int i = 0;
	
	int price[4] = { 536, 626, 934, 1258 };
	printf(“\nThe price of meat  during these years:”);
	for(i = 0; i < 4; i++)
	printf(“\n%d ”, price[i]);
	
	getch();
	return 0;
} 

 
