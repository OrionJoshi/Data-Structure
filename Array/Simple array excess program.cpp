#include<iostream>
#include<conio.h>
using namespace std;
 
int main ()
{
   // roll is an array of 10 integers
   int roll[10]; 
 
   // initialize elements of array          
   for (int i = 0; i < 10; i++) {
      roll[i] = i + 1;
   }
   
   cout << "Element \t \t Value" << endl;
   
   for (int i = 0; i < 10; i++) {
	   cout << i << "\t \t" << roll[i] << endl;
   }
   getch();
   return 0;
}
