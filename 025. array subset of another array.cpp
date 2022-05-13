Array Subset of another array - GeeksForGeeks
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not.
Both the arrays can be sorted or unsorted.
  
Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

Code:
string isSubset(int a1[], int a2[], int n, int m) {
    // your code here
    //using hashmap - to store elements of a1
    unordered_map<int, int> store;
    for(int i=0;i<n;i++) {
        store[a1[i]]++;
    }
    
    //traversing through 2nd array
    int count = 0;
    for(int i=0;i<m;i++) {
        //checking, elements of a2 present or not
        if(store[a2[i]]) {
            count++;    
        }
    }
    if(count == m)
        return "Yes";
    else
        return "No";
}
