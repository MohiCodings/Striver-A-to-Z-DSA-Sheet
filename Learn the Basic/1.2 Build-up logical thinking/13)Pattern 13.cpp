******************************Problem statement************************************
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1
2 3
4 5 6


  *******************************************************************************
  
  ## Solution

  void nNumberTriangle(int n) {
    // Write your code here.
  int num = 1; // starting number
    for(int i=1 ; i<=n; i++){  //  no of rows
        for(int j=1; j<=i; j++){ // inner loop for printing i times
            cout<<num<<" ";  // print number ncreasing by 1 each time
            num= num + 1;
        }
        cout<<endl;
    }
}
