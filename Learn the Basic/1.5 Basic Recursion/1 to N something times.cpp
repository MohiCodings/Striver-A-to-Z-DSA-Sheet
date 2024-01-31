Problem statement
You are given an integer ‘n’.



Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.



Example:
Input: ‘n’ = 5

Output: 1 2 3 4 5

Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].



  vector<int> printNos(int x) {
    // Write Your Code Here

    vector<int> ans;
    for(int i = 1; i <= x; i++) {
        ans.push_back(i);
    }
    return ans;
}
