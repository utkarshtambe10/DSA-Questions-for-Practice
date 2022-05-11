1346. Check If N and Its Double Exist - LeetCode
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).
More formally check if there exists two indices i and j such that:
i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]

Input: arr = [10,2,5,3]
Output: true
Explanation:
N = 10 is the double of M = 5,that is, 10 = 2 * 5.
  
Code:
class Solution {
private:
    bool binarySearch(vector<int>& arr, int start, int end, int target) {
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            if(arr[mid] == target) {
                return true;
            }
            else if(arr[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return false;
    }
    
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        for(int i=0;i<arr.size();i++) {
            //for, positive number
            if(arr[i] >= 0 && binarySearch(arr, i + 1, arr.size() - 1, 2 * arr[i]))
                return true;
                
            //for, negative number
            else if(arr[i] < 0 && arr[i] % 2 == 0 && binarySearch(arr, i + 1, arr.size() - 1, arr[i] / 2))
                return true;
        }
        return false;
    }
};
