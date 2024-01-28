Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
*         *
* *     * *
* * * * * *
* *     * *
*         *



  ## Solution

  void symmetry(int n) {
    // Write your code here.

     int i,j;


//for first half of the pattern
    for(i=0 ; i<n ;i++){
for(j=0;j<=i;j++){
    cout<<"*"<<" ";
}

for(j=0;j<=2*(n-i)-2;j++){
    cout<<"  ";
}

for(j=0;j<=i;j++){
    cout<<"*"<<" ";
}
cout<<endl;
}


//for 2nd half of the pattern
for(i=0 ; i<n-1 ;i++){
for(j=0;j<(n-i)-1;j++){
    cout<<"*"<<" ";
}

for(j=0;j<2*(i+1);j++){
    cout<<"  ";
}

for(j=0;j<(n-i)-1;j++){
    cout<<"*"<<" ";
}
cout<<endl;
    }
}
