******************************************Problem statement****************************
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.

You must print a matrix corresponding to the given Reverse Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A B C
A B
A



*****************************************************************************************
    
## Solution

void nLetterTriangle(int n) {
    // Write your code here.

    for( int i=0; i<n; i++){  // no of rows
        for(char ch='A'; ch<='A'+(n-i-1); ch++){  // Inner loop will loop for i times and
          // print alphabets from A to A + (N-i-1)
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
