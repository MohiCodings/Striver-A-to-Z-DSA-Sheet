Problem statement
Given an integer ‘n’, return first n Fibonacci numbers using a generator function.



Example:
Input: ‘n’ = 5

Output: 0 1 1 2 3

Explanation: First 5 Fibonacci numbers are: 0, 1, 1, 2, and 3.
Note:
You don't need to print anything. Just implement the given function.



  void solve(int a, int b, int c, int n, vector<int> &ans){
    if(n == 0) return; 
    c = a+b; 
    a = b; 
    b = c; 
    ans.push_back(c); 
    solve(a, b, c, n-1, ans); 
}

vector<int> generateFibonacciNumbers(int n) {
    int a = 0, b = 1, c;

    if(n == 1) return {0}; 
    if(n == 2) return {0, 1}; 

    vector<int> ans; 
    ans.push_back(0);
    ans.push_back(1);

    solve(a, b, c, n-2, ans); 

    return ans; 
}
