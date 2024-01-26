Problem statement
Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

For every value of ‘N’, print the field if the trees are represented by ‘*’.

Example:
Input: ‘N’ = 3

Output: 
* * *
* *
*

  ## Solution

  void seeding(int n) {
	// Write your code here.

	for(int i=0; i<n; i++){
		for(int j=n; j>i; j--){
			cout<<"* ";
		}
		cout<<endl;
	}
}
