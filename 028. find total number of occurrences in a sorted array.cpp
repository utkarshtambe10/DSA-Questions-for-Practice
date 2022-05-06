Number of occurrence - GeeksForGeeks
Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.
  
Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 
2 occurs 4 times in the given array.
  
Code:
class Solution {
private:
    int firstOccurence(int arr[], int n, int x) {
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;
        int res = -1;
        
        while(start <= end) {
            if(arr[mid] == x) {
                res = mid;
                end = mid - 1;
            }
            else if(arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return res;
    }
    
    int lastOccurence(int arr[], int n, int x) {
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;
        int res = -1;
        
        while(start <= end) {
            if(arr[mid] == x) {
                res = mid;
                start = mid + 1;
            }
            else if(arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return res;
    }
    
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int first = firstOccurence(arr, n, x);
	    int last = lastOccurence(arr, n, x);
	    int ans = 0;
	    
	    if(first < 0 && last < 0) {
	        ans = 0;
	    }
	    else {
	        ans = last - first + 1;  //counting principle
	    }
	    return ans;
	}
};
