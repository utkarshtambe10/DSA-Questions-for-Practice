0-1 Knapsack Problem - GeeksForGeeks
You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note that we have only one quantity of each item.
In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively.
Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W.
You cannot break an item, either pick the complete item or dont pick it (0-1 property).
  
Input:
N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
Output: 3
  
Code:
class Solution
{
    private:
    //only recursion
    int solve(int W, int wt[], int val[], int n, int index) {
        //base case
        if(index == n || W == 0)
            return 0;
            
        //recursive calls/relations
        int incl = 0;
        if(W >= wt[index])
            incl = val[index] + solve(W - wt[index], wt, val, n, index + 1);
        int excl = solve(W, wt, val, n, index + 1);
        
        return max(incl, excl);
        
    }
    
    //recursion + memoization
    int solveMem(int W, int wt[], int val[], int n, int index, vector<vector<int>> &dp) {
        //base case
        if(index == n || W == 0)
            return 0;
            
        if(dp[W][index] != -1)
            return dp[W][index];
            
        //recursive calls/relations
        int incl = 0;
        if(W >= wt[index])
            incl = val[index] + solveMem(W - wt[index], wt, val, n, index + 1, dp);
        int excl = solveMem(W, wt, val, n, index + 1, dp);
        
        return dp[W][index] = max(incl, excl);
        
    }
    
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(W + 1, vector<int> (n + 1, -1));
       int ans = solveMem(W, wt, val, n, 0, dp);
       
       return ans;
    }
};
