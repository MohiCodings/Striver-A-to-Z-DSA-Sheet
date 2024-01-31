Problem statement
Check whether a given number ’n’ is a palindrome number.

Note :
Palindrome numbers are the numbers that don't change when reversed.
You don’t need to print anything. Just implement the given function.
Example:
Input: 'n' = 51415
Output: true
Explanation: On reversing, 51415 gives 51415.



  bool palindrome(int n)
{
    // Write your code here

int rNumber = 0, temp = n; 

    while(temp != 0){
        rNumber *= 10; 
        rNumber += temp%10; 
        temp = temp/10; 
    }

    return rNumber == n;

}
