*******************Problem statement**************************
Given an array 'arr' of size 'n'.

Return an array with all the elements placed in reverse order.

Note:
You don’t need to print anything. Just implement the given function.
Example:
Input: n = 6, arr = [5, 7, 8, 1, 6, 3]

Output: [3, 6, 1, 8, 7, 5]

Explanation: After reversing the array, it looks like this [3, 6, 1, 8, 7, 5].



*************************************************************************



  void solve(int n, vector<int> &nums){
    if(nums.empty()) return; 
    int element = nums[0]; 
    nums.erase(nums.begin()); 
    solve(n, nums); 
    nums.push_back(element); 
}

vector<int> reverseArray(int n, vector<int> &nums)
{
//    solve(n, nums);
    reverse(nums.begin(), nums.end()); 
   return nums; 
}
