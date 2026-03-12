// Rotate array by K elements
// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.
// Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
// Output : [6, 7, 1, 2, 3, 4, 5]
// Explanation : rotate 1 step to the right: [7, 1, 2, 3, 4, 5, 6]
// rotate 2 steps to the right: [6, 7, 1, 2, 3, 4, 5]

// Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
// Output : [3, 4, 5, 6, 1, 2]
// Explanation :rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]
/*
  Algorithm
Instead of simulating each rotation one by one, we can get the rotated array in-place by reversing specific parts of the array. This works because rotating is just rearranging sections of the array.
For Right Rotation by k steps:
Reverse the entire array
Reverse the first k elements
Reverse the remaining n - k elements
For Left Rotation by k steps:
Reverse the first k elements
Reverse the remaining n - k elements
Reverse the entire array
Normalize k by doing k = k % N
If direction is "right":
Reverse the entire array
Reverse the first k elements
Reverse the rest (from k to end)
If direction is "left":
Reverse the first k elements
Reverse the rest (from k to end)
Reverse the entire array.

Complexity Analysis
Time Complexity: O(N), We reverse parts of the array each reverse takes linear time. So total work is 3 × O(N) = O(N).
Space Complexity: O(1) All modifications are done in-place, using only a few temporary variables.
*/
#include <bits/stdc++.h>
using namespace std;

void ReverseArray(vector<int> &nums, int start, int end)
{
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> nums = {2, 3, 2, 3, 4, 5, 3, 5, 6, 5, 6, 5, 67};
    int k = 2;
    string direction = "left";
    int n = nums.size();
    k = k % n;
    if (n == 1 || k == n) return 0;
    int start = 0, end = n - 1;

    ReverseArray(nums, start, end);
    if (direction == "Right")
    {
        ReverseArray(nums, 0, k - 1);
        ReverseArray(nums, k, n - 1);
    }
    else
    {
        ReverseArray(nums, 0, n - k - 1);
        ReverseArray(nums, n - k, n - 1);
    }
    for(int i = 0; i < n;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
