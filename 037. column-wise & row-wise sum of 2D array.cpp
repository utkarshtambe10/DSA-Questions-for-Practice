Column-wise and Row-wise sum
Given a matrix of order m×n, the task is to find out the sum of each row and each column of a matrix.
  
Input:
array[4][4] = {{1, 1, 1, 1}, 
               {2, 2, 2, 2}, 
               {3, 3, 3, 3}, 
               {4, 4, 4, 4}};
Output:
RowSum -> 4 8 12 16
ColumnSum -> 10 10 10 10

Code:
class Solution {
public:
    void columnSum(int arr[][100], int m, int n) {
        for(int i=0;i<m;i++) {
            int sum = 0;
            for(int j=0;j<n;j++) {
                sum += arr[j][i];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }

    void RowSum(int arr[][100], int m, int n) {
        for(int i=0;i<m;i++) {
            int sum = 0;
            for(int j=0;j<n;j++) {
                sum += arr[i][j];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
};
