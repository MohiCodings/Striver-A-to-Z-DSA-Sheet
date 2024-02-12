***************************************Problem statement***********************************
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1 2 3
1 2
1


**********************************************************************************************
  
  ## Solution

  void nNumberTriangle(int n) {
    // Write your code here.
    for( int i=0; i<n; i++){
        for(int j=n ; j>i; j--){
            cout<<n - j+ 1<<" ";
        }
        cout<< endl;
    }
}
  
