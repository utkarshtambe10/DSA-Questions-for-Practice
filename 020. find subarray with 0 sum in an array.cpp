Subarray with 0 sum - GeeksForGeeks
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
  
Input:
5
4 2 -3 1 6
Output: Yes
Explanation: 
2, -3, 1 is the subarray with sum 0.
  
Code:
class Solution {
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n) {
        //Your code here
        int sum = 0;
        set<int> check;
        
        for(int i=0;i<n;i++) {
            sum += arr[i];
            
            //here, (sum == 0) is checked because,
            //even 0 as element is also considered true
            if(sum == 0 || check.find(sum) != check.end())
                return true;
            
            check.insert(sum);  //inserting sum value if not present into set
        }
        return false;
    }
};
