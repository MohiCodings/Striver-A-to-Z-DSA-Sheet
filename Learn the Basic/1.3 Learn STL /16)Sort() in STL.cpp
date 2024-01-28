Benefits of using sort():

Ease of implementation, omits writing lengthy code to implement different sorting algorithms.
Need not to worry about time complexity, it’s one of the most efficient functions with a N*logN time complexity and uses a mix of quicksort and mergesort in its internal implementation.
Syntax:
The sort() function in STL accepts two mandatory parameters: begin, and end, and sorts the range with-in the container in ascending order by default.

sort(begin, end)



## using vector 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    vector<int> vec = {4,2,1};

    sort(vec.begin(), vec.end());
    
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2];
    
    return 0;
}




## Using array

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int arr[] = {4,2,1};

    sort(arr, arr+3);
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}


## output :  1 2 4
