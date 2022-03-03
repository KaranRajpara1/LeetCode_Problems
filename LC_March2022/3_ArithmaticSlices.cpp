// Arithmatic Slices: https://leetcode.com/problems/arithmetic-slices/
// An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.

// For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.
// Given an integer array nums, return the number of arithmetic subarrays of nums.
//A subarray is a contiguous subsequence of the array.

// Input: nums = [1,2,3,4]
// Output: 3
// We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself.

// Constraints:
// 1 <= nums.length <= 5000
// -1000 <= nums[i] <= 1000

#include<bits/stdc++.h>
using namespace std;
int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size(), res = 0;
        if(n < 3) return 0;
        int len = 0;
        for(int i=1; i<n-1; i++){
            if(nums[i]-nums[i-1] == nums[i+1]-nums[i]) {
                // 3 terms are in AP
                len++;
            }
            else {
                res += len*(len+1)/2;
                len = 0;
            }
        }
        res += len*(len+1)/2;
        return res;
    }
int main() {
    string s; getline(cin, s);
    int num = 0;
    vector<int> v;
    for(int i = 0; i < s.size(); ++i)
        if(s[i] == ' ')
            v.push_back(num), num = 0;
        else
            num = num*10 + (s[i]-'0');
    v.push_back(num);

    //cout << v.size() << endl;
    cout << numberOfArithmeticSlices(v);
    return 0;
}