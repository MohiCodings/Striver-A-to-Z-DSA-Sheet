Syntax:

next_permutation(begin, end);

where, begin is a iterator pointing to 1st element 
of the container.
and, end is an iterator pointing to just after the 
last element of the container.


  ## Using Array

  #include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {1,3,2};
    
    next_permutation(arr,arr+3);//using in-built function of C++
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}
output  :  2 1 3




  ## using vector 

  #include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> vec = {1,3,2};
    
    next_permutation(vec.begin(), vec.end());
    
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2];
    
    return 0;
}

op: 2 1 3
