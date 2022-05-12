Majority Element - GeeksForGeeks
Given an array A of N elements. Find the majority element in the array.
A majority element in an array A of size N is an element that appears more than N/2 times in the array.
  
Input:
N = 5 
A[] = {3, 1, 3, 3, 2} 
Output:
3
Explanation:
Since, 3 is present more than N/2 times, so it is the majority element.
  
Code:
#approach1 - using hashmap
class Solution {
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // your code here
        //traversing through the array
        unordered_map<int, int> element;
        for(int i=0;i<size;i++) {
            element[a[i]]++;
        }
        //traversing in map
        int count = 0;  //for knowing how many elements satisfy the condition
        for(auto i: element) {
            if(i.second > size / 2) {
                count++;
                return i.first;
                break;  //no need of searching further
            }
        }
        if(count == 0)
            return -1;
    }
};

#approach2 - using Moore's Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using moore's voting algorithm
        int count = 0;
        int candidate = 0;
        for(int i=0;i<nums.size();i++) {
            if(count == 0)
                candidate = nums[i];
            
            if(candidate == nums[i])
                count++;
            else
                count--;
        }
        return candidate;
    }
};
