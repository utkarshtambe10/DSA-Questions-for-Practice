69. Sqrt(x) - LeetCode
Given a non-negative integer x, compute and return the square root of x.
Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.
Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
 
Input: x = 8
Output: 2
Explanation: 
The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
  
Code:
class Solution {
private:
    long long int binarySearch(int num) {
        int start = 0;
        int end = num;
        long long int mid = start + (end - start) / 2;
        
        long long int ans = -1;
        
        while(start <= end) {
            
            long long int square = mid * mid;
            
            if(square == num) {
                return mid;
            }
            else if(square > num) {
                end = mid - 1;
            }
            else {
                ans = mid;  //storing probable answer of sqrt
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
    
public:
    int mySqrt(int x) {
        return binarySearch(x);
    }
};

#if decimal-part(precision) of the square-root if required:
Code:
double decimalPart(int n, int precision, int intPart) {
    double factor = 1;
    double ans = intPart;
    for(int i=0;i<precision;i++) {
        factor = factor / 10;
        for(double j=ans;j*j<n;j=j+factor) {
            ans = j;
        }
    }
    return ans;
}
