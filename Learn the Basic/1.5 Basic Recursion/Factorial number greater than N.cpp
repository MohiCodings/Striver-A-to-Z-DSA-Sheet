***********************Problem statement**************************
You are given an integer ’n’.
Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.
The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4.

Note:
In the output, you will see the array returned by you.
Example:
Input: ‘n’ = 7

Output: 1 2 6

Explanation: Factorial numbers less than or equal to ‘7’ are ‘1’, ‘2’, and ‘6’.

************************************************************************************

  void solve(int index, long long n, vector<long long> &ans){
    if(ans[ans.size()-1]*index > n) return; 
    ans.push_back(ans[ans.size()-1]*index); 
    solve(index+1, n, ans); 
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> ans;
    ans.push_back(1); 
    solve(2, n, ans); 
    return ans; 
}
