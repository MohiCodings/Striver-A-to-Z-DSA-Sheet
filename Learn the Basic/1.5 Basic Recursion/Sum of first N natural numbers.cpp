***********************************Problem statement*******************************
You are given an integer ‘n’.

Your task is determining the sum of the first ‘n’ natural numbers and returning it.



Example:
Input: ‘n’ = 3

Output: 6

Explanation: The sum of the first 3 natural numbers is 1 + 2 + 3, equal to 6.


**************************************************************************************

long long solve(long long n) {
    // Write your code here.


     if(n == 0) return 0; 
    else return n+solve(n-1); 
}

long long sumFirstN(long long n) {
    // return solve(n); 
    return n*(n+1)/2; 
}
