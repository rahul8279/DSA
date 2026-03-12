/*
 <----- Remove Duplicates in-place from Sorted Array ---->
Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Examples
Input: arr[]=[1,1,2,2,2,3,3]
Output: [1,2,3,_,_,_,_]
Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.
Input: arr[]=[1,1,1,2,2,3,3,3,3,4,4]
Output: [1,2,3,4,_,_,_,_,_,_,_]
Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.
*/
#include <bits/stdc++.h>
using namespace std;
/*
  Brute Force Approch - for this we can use set data structure to store the unique element and then copy the unique element in the beginning of the array and return the size of set as answer.
  complexity Analysis =>Time Complexity: O(N), where N is the size of the array, as we are traversing the array once.
                      =>Space Complexity: O(N), as we are using a set data structure to store the unique element.
*/
/*
  Optimal Approch - for this we can use two pointer approach to remove the duplicates in place.
  Algorithm - => Create two pointer i and j and initlized with 0 and 1 respectively.
              => Traverse the array with loop until j is less than n.
              => if nums[i] is not equal to nums[j] then increment i and assign nums[j] value to nums[i].
              => Increment j after each iteration.
              => After traverse whole array return i+1 as answer.

    Complexity Analysis =>Time Complexity: O(N), where N is the size of the array, as we are traversing the array once.
                        =>Space Complexity: O(1), as we are using a constant space to store the unique element.

*/
int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;
    int i = 0;
    for(int j=1;j<n;j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}

int main(){
    vector<int> nums = {1,1,2,2,2,3,3,4,5,5,6};
    cout<<"Answer is : "<<removeDuplicates(nums)<<endl;
    return 0;
}