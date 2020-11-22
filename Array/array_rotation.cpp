// Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements.
// METHOD 1 (Using temp array)

// Input arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2, n =7
// 1) Store the first d elements in a temp array
//    temp[] = [1, 2]
// 2) Shift rest of the arr[]
//    arr[] = [3, 4, 5, 6, 7, 6, 7]
// 3) Store back the d elements
//    arr[] = [3, 4, 5, 6, 7, 1, 2]

#include<iostream>
using namespace std;

void rotate(int arr[], int d, int n) {

    int temp[d];
    int i, j, k = 0;

// assigning rotating elements in temp array
    for(i = 0; i < d; i++) {

        temp[i] = arr[i];

    }
// left Shifiting of array
    for(i = 0; i < n - d; i++) {

        arr[i] = arr[i + d];
        
    }
// reassigning in the end of array
    for (j = n - d; j < n; j++) {

        arr[j] = temp[k];
        k++;

    }
}

void display(int arr[], int n) {

    //displaying the rotated array
    int i;

    for(i = 0; i < n; i++) {

        cout << arr[i];
    }

}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int n = sizeof(arr) / sizeof(arr[0]); // finding the numbers of elements of array

    rotate(arr, 2, n);

    display(arr, n); // call function to display rotated array

    return 0;
}

// Time complexity : O(n)
// Auxiliary Space : O(d)