************************Problem statement****************************
A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.

You are given a number 'n'.

Find out whether 'n' is prime or not.

Example :
Input: 'n' = 5

Output: YES

Explanation: 5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.



**************************************************************************************

bool isPrime(int n)
{
	// Write your code here.

if(n == 2 || n == 3) return true; 
	if(n == 1 || n%2 == 0 || n%3 == 0) return false; 

	for(int i = 5; i*i<n; i+=6){
		if(n%(i) == 0 || n%(i+2) == 0) return false; 
	}

	return true; 
}
