Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A
A B
A B C


## Solution

void nLetterTriangle(int n) {
    // Write your code here.

    for( int i=0; i<n; i++){  // no of rows
        for(char ch='A'; ch<='A'+ i ; ch++){  // Inner loop will loop for i times and
          // print alphabets from A to A + i.
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
