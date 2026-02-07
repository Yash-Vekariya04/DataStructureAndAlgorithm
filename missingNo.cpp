#include <iostream>
using namespace std;

int main()
{
  // To find the missing no.

  int n;
  cout << " Enter the number of elements in the array : ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Enter the element no. " << i + 1 << " : ";
    cin >> arr[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  int miss_no = n * (n + 1) / 2 - sum;
  cout << miss_no;
  return 0;
}

// LeetCode -->

// class Solution
// {
// public:
//   int missingNumber(vector<int> &nums)
//   {
//     int n = nums.size();
//     int tot = n * (n + 1) / 2;
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//       sum += nums[i];
//     }

//     return tot - sum;
//   }
// };