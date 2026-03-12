// Left Rotate the Array by One
// Problem Statement: Given an integer array nums, rotate the array to the left by one.
// Note: There is no need to return anything, just modify the given array.
/*Examples
Example 1:
Input:
 nums = [1, 2, 3, 4, 5]  
Output:
 [2, 3, 4, 5, 1]  
Explanation:
 Initially, nums = [1, 2, 3, 4, 5]  
Rotating once to the left results in nums = [2, 3, 4, 5, 1].

Example 2:
Input:
 nums = [-1, 0, 3, 6]  
Output:
 [0, 3, 6, -1]  
Explanation:
 Initially, nums = [-1, 0, 3, 6]  
Rotating once to the left results in nums = [0, 3, 6, -1].*/

/*
  Optimal Approch
  Algorithm - => Store the first element of the array in a variable called temp.
              => Traverse the array from index 1 to n-1 and assign the value of current index to previous index.
              => After traverse whole array assign the value of temp variable to last index of the array.

    Complexity Analysis =>Time Complexity: O(N), where N is the size of the array, as we are traversing the array once.
                        =>Space Complexity: O(1), as we are using a constant space to store the first element of the array.

*/
#include <bits/stdc++.h>
using namespace std;
void leftRotateByOne(vector<int>& nums){
    int n = nums.size();
    if(n == 0 || n == 1) return;
    int temp = nums[0];
    for(int i=1;i<n;i++){
        nums[i-1] = nums[i];
    }
    nums[n-1] = temp;
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    leftRotateByOne(nums);
    cout<<"After Left Rotate by One : ";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}