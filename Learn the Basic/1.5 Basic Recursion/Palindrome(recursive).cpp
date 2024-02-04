Problem statement
Determine if a given string ‘S’ is a palindrome using recursion. Return a Boolean value of true if it is a palindrome and false if it is not.

Note: You are not required to print anything, just implement the function. Example:
Input: s = "racecar"
Output: true
Explanation: "racecar" is a palindrome.



  bool solve(int start, int end, string &str){
    if(start > end) return true; 
    return str[start] != str[end] ? false : solve(start+1, end -1, str);
}

bool isPalindrome(string& str) {
    return solve(0, str.length()-1, str);
}
