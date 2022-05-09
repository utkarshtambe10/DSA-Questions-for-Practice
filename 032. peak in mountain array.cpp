852. Peak Index in a Mountain Array - LeetCode
Let's call an array arr a mountain if the following properties hold: arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, 
return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
  
Input: arr = [0,1,0]
Output: 1
  
Code:
#approach1
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
                return mid;
            }
            else if(arr[mid] < arr[mid + 1]) {
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

#approach2
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;
        
        while(start < end) {
            if(arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        return start;
    }
};
