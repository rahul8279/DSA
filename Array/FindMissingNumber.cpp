/*
  We have Given Array of [1,n] distint integer.
  we need to find the missing integer.
  Example - Arr = [1,2,3,4,5,7,8] output = 6 
*/
#include <bits/stdc++.h>
using namespace std;
/*
  Approch -1 -- 1. ek variable lengai jo array ki value ko iterate kr sake.
                2. fir array ka size nikalengai or usme ek add kr denagi kuki missing number ki vje se ek number bda hoga usme.
                3. loop lgayengai or check or loop ko 1 se start krengai.
                4. ab loop variable ko arr[j] se compare krengai.
                5. ager i != arr[j] to return kr dengai us i ko.
                6. nhi to j++ kr dengai.

*/
int FindMissinggNumber(vector<int> &nums){
  int n = nums.size() + 1;
  int j = 0;
  for(int i = 1;i <= n; i++){
      if (i != nums[j])
      {
        return i;
      }
      j++;
  }
}
/*
  Approch 2 - 1. idea is to add all number which are present in array,since all array start with 1 to n.
              2. then the add all number between 1 to n + 1.
              3. then the substract the actual sum from expected sum and return the number which is missing.


*/
int FindMissinggNumber2(vector<int> &nums){
  int n = nums.size() + 1;
  int ExpectedSum = 0;
  int ActualSum = 0;
  for (int i = 1; i <= n; i++)
  {
    ActualSum += i;
  }
  for (int i = 0; i < n - 1; i++)
  {
    ExpectedSum += nums[i];
  }
  cout<<ActualSum << " " <<ExpectedSum<<endl;
  return ActualSum - ExpectedSum;
  
}

int main(){
  vector<int> nums = {1,2,3,4,5,6,8};
  // cout<<"Number is -: "<<FindMissinggNumber(nums)<<endl;
  cout<<"Number is -: "<<FindMissinggNumber2(nums)<<endl;
  return 0;
}