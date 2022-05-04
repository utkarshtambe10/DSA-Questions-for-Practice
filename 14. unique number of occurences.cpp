1207. Unique Number of Occurrences - LeetCode
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.
  
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Code:
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        set<int> ans;
        for(int i=0;i<arr.size();i++) {
            count[arr[i]]++;
        }
        
        for(auto i : count) {
            ans.insert(i.second);
            }
            if(ans.size() == count.size()) {
                return true;
            }
        return false;
    }
};
