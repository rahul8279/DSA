/*
  PROBLEM 1 - Find the Largest element in an array.
     Example  - input - {2,5,3,2,5,3,6}  output - 6
*/

/*
   Brute Froce Approch
   Alogrithm - => Sort the array in ascending order.
                => Return the Last Element of sorted array.

    Complexity Analysis =>Time Complexity: O(N log N), where N is the size of the array, as we are sorting the array.
                        =>Space Complexity: O(1), as we are using a constant             

*/

/*
  Optimal Approch
  Algorithm - => Create a variable called Max and initlized with INT_MIN(smallest Number).
              => Traverse the Array with loop.
              => check the Max value with variable i of loop
              => if Max value is greater the arr[i]  then put arr[i] value in Max variable.
              => After traverse whole array return the Max variable that the Maximum value present in Array.
    
  Complexity Analysis =>Time Complexity: O(N), where N is the size of the array.
                      =>Space Complexity: O(1), as we are using a constant

              
*/

#include <bits/stdc++.h>
using namespace std;

int BruteFroceApproch(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    return arr[n - 1];
}

int OptimalApproch(vector<int>& arr)
{
    int maxValue = INT32_MIN;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (maxValue < arr[i])
        {
            maxValue = arr[i];
        }
    }
    return maxValue;
}
int main()
{
    vector<int> arr1 = {3, 4, 5, 3, 2, 6, 4, 7};
    cout << "largest Element in Arr1 is :" << BruteFroceApproch(arr1)<<endl;

    vector<int> arr2 = {2, 3, 23, 43, 13, 4, 3, 55, 4, 55};
    cout << "Largest Element in Arr2 is : " << OptimalApproch(arr2);
}