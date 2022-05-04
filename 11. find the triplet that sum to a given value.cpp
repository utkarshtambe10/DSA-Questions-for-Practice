Triplet Sum in Array - GeeksForGeeks
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.
  
Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.
  
Code:
class Solution {
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A + n);
        
        for(int i=0;i<n;i++) {
            int start = i + 1;
            int end = n - 1;
            
            while(start < end) {
                if(A[i] + A[start] + A[end] == X) {
                    return true;
                }
                else if(A[i] + A[start] + A[end] < X) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }
        return false;
    }
};
