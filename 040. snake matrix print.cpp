Print Matrix in snake Pattern - GeeksForGeeks
Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern.
  
Input:
N = 3 
matrix[][] = {{45, 48, 54},
              {21, 89, 87},
              {70, 78, 15}}
Output: 45 48 54 87 89 21 70 78 15 
Explanation:
Matrix is as below ->
45 48 54
21 89 87
70 78 15
Printing it in snake pattern will lead to the output as 45 48 54 87 89 21 70 78 15.
  
Code:
class Solution {   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int>> matrix) {   
        //your code here
        vector<int> ans;
        for(int i=0;i<matrix.size();i++) {
            if(i & 1) {  //checking for odd row
                for(int j=matrix[0].size()-1;j>=0;j--) {
                    ans.push_back(matrix[i][j]);
                }
            }
            else {
                for(int j=0;j<matrix[0].size();j++) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};
