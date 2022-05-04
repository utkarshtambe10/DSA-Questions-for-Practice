First Repeating Element - GeeksForGeeks
Given an array arr[] of size n, find the first repeating element.
The element should occurs more than once and the index of its first occurrence should be the smallest.

Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.
  
Code:
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        //code here
        unordered_map<int, int> check;
        for(int i=0;i<n;i++) {
            check[arr[i]]++;
        }
        //traversing in map
        for(int i=0;i<n;i++) {
            if(check[arr[i]] > 1)  //checking if element's occurence is greater than 1
                return i + 1;
        }
        return -1;
    }
};
