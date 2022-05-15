Spirally traversing a matrix - GeeksForGeeks
Given a matrix of size r*c. Traverse the matrix in spiral form.
  
Input:
r = 3, c = 4  
matrix[][] = {{1, 2, 3, 4},
              {5, 6, 7, 8},
              {9, 10, 11, 12}}
Output: 
1 2 3 4 8 12 11 10 9 5 6 7
Explanation:
Applying spiral-pattern technique as known, output for the this testcase will be 1 2 3 4 8 12 11 10 9 5 6 7.
  
Code:
class Solution {   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
    {
        // your code here
        //index initialisation
        int startRow = 0;
        int startCol = 0;
        int endRow = r - 1;
        int endCol = c - 1;
        
        //storing answer
        vector<int> ans;
        
        int count = 0;
        int total = r * c;
        while(count < total) {
            //printing firstRow
            for(int i=startCol;count<total && i<=endCol;i++) {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            
            //printing endCol
            for(int i=startRow;count<total && i<=endRow;i++) {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            
            //printing endRow
            for(int i=endCol;count<total && i>=startCol;i--) {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            
            //printing firstCol
            for(int i=endRow;count<total && i>=startRow;i--) {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};
