Subarrays with equal 1s and 0s - GeeksForGeeks
Given an array containing 0s and 1s. Find the number of subarrays having equal number of 0s and 1s.
  
Input:
n = 7
A[] = {1, 0, 0, 1, 0, 1, 1}
Output: 8
Explanation: 
The index range for the 8 sub-arrays are:
(0, 1), (2, 3), (0, 3), (3, 4), (4, 5) ,(2, 5), (0, 5), (1, 6)
  
Code:
class Solution {
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        int sum = 0;
        long long int count = 0;
        unordered_map<int, int> map;
        
        for(int i=0;i<n;i++) {
            if(arr[i] == 0)
            arr[i] = -1;  //replacing element 0 with -1
        
            sum += arr[i];
            if(sum == 0)
                count++;  //increasing the count if sum = 0
        
            if(map[sum])
                count += map[sum];
        
            if(map[sum] == 0)
                map[sum] = 1;
            else
                map[sum]++;    
        }
        
        return count;
    }
};
