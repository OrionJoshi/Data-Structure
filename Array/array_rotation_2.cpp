#include<iostream>
using namespace std;

void rotate(int arr[], int d, int n) {

    int i, j, temp;

    for(i = 0; i < d; i++) {

        temp = arr[0];
       
       for(j = 0 ;j < n - 1; j++) {

           arr[j] = arr[j + 1];

       }

       arr[n - 1] = temp;
    }

}

void display(int arr[], int n) {

    //displaying the rotated array
    int i;

    for(i = 0; i < n; i++) {

        cout << arr[i];
    }

}

int main()  {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 0};

    int n = sizeof(arr) / sizeof(arr[0]); // finding the numbers of elements of array

    rotate(arr, 2, n);

    display(arr, n); // call function to display rotated array


    return 0;
}