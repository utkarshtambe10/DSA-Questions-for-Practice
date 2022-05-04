136. Single Number - LeetCode
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
  
Input: 
nums = [2,2,1]
Output: 1
  
Code:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //using bitwise-xor concept
        //where, 0^0 = 0 and 1^0 = 1
        int ans = 0;
        
        for(int i =0;i<nums.size();i++) {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
