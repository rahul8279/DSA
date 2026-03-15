/*
  <-------- Find the number that appears once, and the other numbers twice. ------------->
   Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

   Examples
            Example 1:
            Input Format: arr[] = {2,2,1}
            Result: 1
            Explanation: In this array, only the element 1 appear once and so it is the answer.


            Example 2:
            Input Format: arr[] = {4,1,2,1,2}
            Result: 4
            Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.

*/

/*
intuition
Two important properties of XOR are the following:
XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a. ←Property 2

Approach
We will just perform the XOR of all elements of the array using a loop and the final XOR will be the answer.

Complexity Analysis
Time Complexity: O(N). Where N is the size of the array

Space Complexity: O(1). No extra space used


*/
#include <bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> &arr)
{
  int n = arr.size();
  int xorr = 0;

  // XOR all elements. Duplicates cancel out, leaving the single element.
  for (int i = 0; i < n; i++)
  {
    xorr = xorr ^ arr[i];
  }

  return xorr;
}

int main()
{
  vector<int> nums = {1, 1, 2, 3, 3, 4, 4};
  cout << "Only Appear One's Number is : - " << getSingleElement(nums) << endl;
}