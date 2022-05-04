Binary Search - GeeksForGeeks
Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.
  
Input:
N = 5
arr[] = {1, 2, 3, 4, 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.

Code:
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            if(arr[mid] == k)
                return mid;
            else if(arr[mid] < k) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
    }
};
