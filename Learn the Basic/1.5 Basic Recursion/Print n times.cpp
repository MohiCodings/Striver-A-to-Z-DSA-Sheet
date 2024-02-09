*************************Problem statement***************************************
You are given an integer ‘n’.

Print “Coding Ninjas ” ‘n’ times, without using a loop.

Example:
Input: ‘n’  = 4

Output:
Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas 

Explanation: “Coding Ninjas” is printed 4 times. 


***********************************************************************************


  vector<string> printNTimes(int n) {
	// Write your code here.

	vector<string> ans;
	for(int i = 0; i < n; i++) {
		ans.push_back("Coding Ninjas");
	}
	return ans;
}






