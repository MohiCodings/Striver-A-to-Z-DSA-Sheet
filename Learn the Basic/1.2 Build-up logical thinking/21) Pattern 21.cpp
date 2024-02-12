**************************Problem statement******************************
Ninja has been given a task to print the required star pattern and he asked your help for the same.

You must return an ‘N’*’N’ matrix corresponding to the given star pattern.

Example:
Input: ‘N’ = 4

Output: 

****
*  *
*  *
****

*****************************************************************************

  ## Solution

  void getStarPattern(int n) {
    // Write your code here.

    for(int i=0;i<n;i++){    
         for(int j=0;j<n;j++){  // inner loop for printing the stars at borders only.    
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";     // if not border index, print space. 
             else cout<<" ";
         }
          cout<<endl;
     }    
}
