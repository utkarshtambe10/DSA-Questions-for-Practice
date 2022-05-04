Find minimum and maximum element in an array - GeeksForGeeks
Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000
  
Code:
pair<long long, long long> getMinMax(long long a[], int n) {
    long long maxElement = a[0];
    long long minElement = a[0];
    pair<int, int> p;
    
    for(int i=0;i<n;i++) {
        maxElement = max(a[i], maxElement);
        minElement = min(a[i], minElement);
    }
    p.first = minElement;
    p.second = maxElement;
    
    return p;
}
