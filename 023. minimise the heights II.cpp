Minimize the Heights II - GeeksForGeeks
Given an array arr[] denoting heights of N towers and a positive integer K,
you have to modify the height of each tower either by increasing or decreasing them by K only once.
After modifying, height should be a non-negative integer. 
Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower.

Note: It is compulsory to increase or decrease by K to each tower.
  
Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as {3, 3, 6, 8}.
The difference between the largest and the smallest is 8-3 = 5.
  
Code:
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr + n);
        int minElement = arr[0];
        int maxElement = arr[n-1];
        int ans = maxElement - minElement;
        
        for(int i=1;i<n;i++) {
            if(arr[i] - k < 0)
                continue;
            
            minElement = min(arr[0] + k, arr[i] - k);
            maxElement = max(arr[n - 1] - k, arr[i - 1] + k);
            
            ans = min(maxElement - minElement, ans);
        }
        return ans;
    }
};
