***************************Problem statement********************************
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *

****************************************************************************

 
  ## Solution 
  void nStarTriangle(int n) {
    // Write your code here.


    for(int i=0; i<n; i++){  //outer loop for rows
        for(int j=0; j<i; j++){  // printing spaces in row before star
            cout<<" ";
        }

        for(int j=0; j<2*n-(2*i+1); j++){  // for printing stars n each row
            cout<<"*";
        }
        for(int j=0; j<i; j++){  // For printing the spaces after the stars in each row
            cout<<" ";
        }
        cout<<endl;
    }
}
