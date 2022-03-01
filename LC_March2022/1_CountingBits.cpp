// Counting Bits (https://leetcode.com/problems/counting-bits/)
// Difficulty: Easy
// Topic: Bit Manipulation + DP
// Given an integer n, return an array ans of length n + 1 such that for each 
// i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10

// Constraints: 0 <= n <= 105

// Follow up:

// It is very easy to come up with a solution with a runtime of O(n log n). 
// 1. Can you do it in linear time O(n) and possibly in a single pass?
// 2. Can you do it without using any built-in function  (i.e., like __builtin_popcount in C++)?

#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n){
    int res = 0;
    while(n > 0){
        n = n&(n-1);
        res++;
    }
    return res;
}
vector<int> countBits(int n) {
    // approach 1: Using Brion Kerningom's method
    // when we subtract 1 from a number, all the bits which is 0 after the last set bit become 1.
    // and last set bit becomes 0. (last set means leftmost set bit).
    // Time Complexity: O(n*d) where d = no. of set bits in a number
    vector<int> res;
    res.push_back(0);
    if(n == 0) return res;
    for(int i=1; i<=n; i++){
        res.push_back(countSetBits(i));
    }
        return res;

    // approach 2: DP approach
    // discuss forum link: https://leetcode.com/problems/counting-bits/discuss/1808016/C%2B%2B-oror-Vectors-Only-oror-Easy-To-Understand-oror-Full-Explanation
}
int main() {
    int n;
    cin >> n;
    vector<int> res;
    res = countBits(n);
    for(auto &it : res) cout << it << " ";
    return 0;
}