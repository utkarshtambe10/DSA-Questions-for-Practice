702. Search in a Sorted Array of Unknown Size - LeetCode(Premium)
Given an integer array sorted in ascending order, write a function to search target in nums. 
If target exists, then return its index, otherwise return -1. However, the array size is unknown to you.
  
Input:
array = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation:
9 exists in nums and its index is 4
  
Code:
class Solution {
private:
    int binarySearch(int nums[], int start, int end, int target) {
        int mid = start + (end - start) / 2;

        while (start <= end) {
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

public:
    int findIndexPosition(int nums[], int target) {
        int start = 0;
        int end = 1;
        int value = nums[0];

        while (value < target) {
            start = end;
            end = end * 2;
            value = nums[end];
        }
        return binarySearch(nums, start, end, target);
    }
};
