Print Matrix in Wave Form - CodeStudio
For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order,
i.e. print the first column top to bottom, next column bottom to top, and so on.
  
Input: 
mat[][] = {{1, 2, 3, 4}
           {5, 6, 7, 8}
           {9, 10, 11, 12}
           {13, 14, 15, 16}
           {17, 18, 19, 20}}
Output: 
1 5 9 13 17 18 14 10 6 2 3 7 11 15 19 20 16 12 8 4 
Explanation:
Output is printed in wave form.
  
Code:
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
  //Write your code here
	vector<int> ans;
	for(int j=0;j<mCols;j++) {
		if(j & 1) {  //checking for odd
			for(int i=nRows-1;i>=0;i--) {
				ans.push_back(arr[i][j]);
			}
		}
		else {
			for(int i=0;i<nRows;i++) {
				ans.push_back(arr[i][j]);
			}
		}
	}
	return ans;
}
