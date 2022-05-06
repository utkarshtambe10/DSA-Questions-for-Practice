First and last occurrences of X - GeeksForGeeks
Given a sorted array having N elements, find the indices of the first and last occurrences of an element X in the given array.
Note: If the number X is not found in the array, return '-1' as an array.

Input:
N = 4, X = 3
arr[] = { 1, 3, 3, 4 }
Output:
1 2
Explanation:
For the above array, first occurence of X = 3 is at index = 1 and last occurence is at index = 2.

Code:
class Solution {
  private:
    int firstOccurence(vector<int> &arr, int n, int x) {
        int start = 0;
        int end = arr.size() - 1;
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
    
    int lastOccurence(vector<int> &arr, int n, int x) {
        int start = 0;
        int end = arr.size() - 1;
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
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        vector<int> ans;
        int low = firstOccurence(arr, n, x);
        int high = lastOccurence(arr, n, x);
        
        if(low < 0 && high < 0) {
            ans.push_back(-1);
        }
        else {
            ans.push_back(low);
            ans.push_back(high);
        }
        return ans;
    }
};
