Non-Repeating Element - GeeksForGeeks
Find the first non-repeating element in a given array arr of N integers.
Note: Array consists of only positive and negative integers and not zero.
  
Input:
arr[] = {-1, 2, -1, 3, 2}
Output: 3
Explanation:
-1 and 2 are repeating whereas 3 is the only number occuring once.
Hence, the output is 3. 
  
Code:
class Solution {
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        unordered_map<int, int> count;
        for(int i=0;i<n;i++) {
            count[arr[i]]++;  //inserting elements of array into the map
        }
        
        for(int i=0;i<n;i++) {  //traversing the array
            if(count[arr[i]] == 1)  //checking if any element has occured once or not
                return arr[i];
        }
        return 0;
    } 
};
