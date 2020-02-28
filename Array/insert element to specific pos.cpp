//program to insert new elements to the specific position of an array
#include<stdio.h>
#include<conio.h>

void insertItem(int [100],int*);  //function prototype for inserting an elements to ana array

int main(void){
	
	int a[100],i;
	int n;
	
	printf("Enter the number of elements to be inserted");
	scanf("%d",&n);
	
	printf("Enter %d elements",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//calling the insert function
	insertItem(a,&n);
	
	getch();
	return 0;
}
void insertItem(int a[100],int *n){
	int pos,element,i;
	
	printf("Enter position at which you want to insert new element");
	scanf("%d",&pos);
	printf("Enter new elements");
	scanf("%d",&element);
	
	for(i=*n-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=element;
	*n=*n+1;
	printf("NEw array is :\n");
	for(i=0;i<*n;i++){
		
		
		printf("%d\t",a[i]);
	}
}
