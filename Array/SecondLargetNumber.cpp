/*
 Problem => Find Second Smallest and Second Largest Element in an array.
             Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

  complexity Analysis =>Time Complexity: O(N log N), where N is the size of the array, as we are sorting the array.
                      =>Space Complexity: O(1), as we are using a constant
*/

#include <bits/stdc++.h>
using namespace std;
/*
  Brute Force Approch
  Algorithm - => Sort the array in ascending order.
              => Return the Second Last Element of sorted array as Second Largest and Second Element of sorted array as Second Smallest.

    Complexity Analysis =>Time Complexity: O(N log N), where N is the size of the array, as we are sorting the array.
                        =>Space Complexity: O(1), as we are using a constant
*/
void BruteForceApproch(vector<int> &nums){
    int n= nums.size();
    if(n < 2) return;
  sort(nums.begin(),nums.end());
  cout<<"Seconnd Smallest number is :"<<nums[1]<<" And Second Maximum number is : "<<nums[n-2]<<endl;
}
/*
 optimal Approch
 Algorithm - => Create two variable F_Max and S_Max and initlized with INT_MIN(smallest Number).
             => Traverse the Array with loop.
             => check the F_Max value with variable i of loop
             => if F_Max value is greater the arr[i]  then put arr[i] value in F_Max variable and put F_Max value in S_Max variable.
             => else if arr[i] value is greater than S_Max and arr[i] value is not equal to F_Max value then put arr[i] value in S_Max variable.
             => After traverse whole array return the S_Max variable that the Second Maximum value present in Array.

    Complexity Analysis =>Time Complexity: O(N), where N is the size of the array.
                        =>Space Complexity: O(1), as we are using a constant
*/
void OptimalApproch(vector<int> &nums){
    int n = nums.size();
    if(n < 2) return;
    int F_Max = INT32_MIN; 
    int S_Max = INT32_MIN;
    for(int i=0;i<=n-1;i++){
        if(F_Max < nums[i]){
            S_Max = F_Max;
            F_Max = nums[i];
        }else if(nums[i] > S_Max && nums[i] != F_Max ){
            S_Max = nums[i];
        }
    }
   cout<<"Second Smallest Element is : "<<S_Max<<endl;
}
int main(){
    vector<int> nums = {29,32,323,43,43,34,45,43,33};
    BruteForceApproch(nums);
    OptimalApproch(nums);
   return 0;
}