Problem statement
Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.

An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.

For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.

Example:
Input: ‘N’ = 3

Output: 
C
C B 
C B A


## Solution

void alphaTriangle(int n) {
    // Write your code here.
char ch='A' + (n-1);
 for(int i=0; i<n; i++)
   {
        for(char x = ch; x>=ch-i; x--)
        {
            cout<<x<<" ";
        }
        cout<<endl;
   }
}
