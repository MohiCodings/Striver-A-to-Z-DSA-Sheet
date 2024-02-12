***********************Problem statement**********************
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.

You are required to print the pattern as shown in the examples below.

Example:
Input: ‘N’ = 3

Output: 

1
0 1
1 0 1


*************************************************************
  
  ## Solution 

  void nBinaryTriangle(int n) {
    // Write your code here.


   int start =1; // printing a single 1
      
      
      for(int i=0;i<n;i++){  // Outer loop for the no. of rows
          
          
          if(i%2==0) start =1; // if row index is even then 1 is printed first
          else start =0;  // if odd then 0 printed
          
         
          for(int j=0; j<=i; j++){  // alternatively print 1's and 0's in each row
              cout<<start<<" ";
              start = 1-start;
          }
        cout<<endl;
      }
}
