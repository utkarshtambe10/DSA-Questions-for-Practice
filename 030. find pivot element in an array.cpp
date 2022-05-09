Find pivot in a sorted rotated array
Given a sorted integer array which is rotated any number of times, find the pivot index i.e. index of the minimum element of the array.

Input: arr[] = {8, 10, 17, 1, 2}
Output: 3
Explanation:
The smallest among all the elements of array is considered as Pivot element. Here, it is '1' so it's index is '3'.

Code:
int pivotElement(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start < end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
