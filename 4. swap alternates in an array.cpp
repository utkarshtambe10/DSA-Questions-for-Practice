Swap alternates in an array
Given an array arr[] of N integers, the task is to swap the first and the second element then the third and the fourth element then the fifth and the sixth and so on.
Print the final array after all the valid operations.
  
Input:
arr[] = {1, 2, 3, 4, 5, 6} 
Output: 2 1 4 3 6 5 
Explanation: Swap 1 and 2 then Swap 3 and 4
  
Code:
#include <bits/stdc++.h>
using namespace std;

void swapAlternates(int arr[], int size) {
    for(int i=0;i<size;i+=2) {
        if(i + 1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size) {
    cout<<"swapped elements of array are: ";
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int a[100];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    swapAlternates(a, n);
    printArray(a, n);

    return 0;
}
