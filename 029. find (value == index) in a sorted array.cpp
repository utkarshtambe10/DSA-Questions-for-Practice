Value equal to index value - GeeksForGeeks
Given an array Arr of N positive integers. Your task is to find the elements whose value is equal to that of its index value.

Input: 
N = 5
Arr[] = {15, 45, 2, 12, 7}
Output: 2
Explanation: Only Arr[2] = 2 exists here.

Code:
#approach1 - linear search O(n) complexity
class Solution {
public:
	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> ans;
	    for(int i=0;i<n;i++) {
	        if(arr[i] == i) {
	            ans.push_back(arr[i]);
	            break;
	        }
	    }
	    return ans;
	}
};

#approach2 - binary search O(logn) complexity (works only on sorted array)
class Solution {
public:
	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    int start = 1;
	    int end = n;
	    int mid = start + (end - start) / 2;
	    vector<int> ans;
	    
	    while(start <= end) {
	        if(arr[mid] == mid) {
	            ans.push_back(mid);
	        }
	        else if(arr[mid] < mid) {
	            start = mid + 1;
	        }
	        else {
	            end = mid - 1;
	        }
	        mid = start + (end - start) / 2;
	    }
	    ans.push_back(-1);
	}
};
