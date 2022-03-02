// Is Subsequence (https://leetcode.com/problems/is-subsequence/)
// Difficulty: Easy
// Topic: String + Two pointer

// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
// A subsequence of a string is a new string that is formed from the original string by 
// deleting some (can be none) of the characters without disturbing the relative positions 
// of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

// Example: Input: s = "abc", t = "ahbgdc" Output: true

// Constraints:
// 0 <= s.length <= 100
// 0 <= t.length <= 104
// s and t consist only of lowercase English letters.

// Follow up:
// uppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109, and you want 
// to check one by one to see if t has its subsequence. In this scenario, how would you 
// change your code?
// Discuss: https://leetcode.com/problems/is-subsequence/discuss/87302/Binary-search-solution-for-follow-up-with-detailed-comments

#include<bits/stdc++.h>
using namespace std;
 bool isSubsequence(string s, string t) {
        int i=0, j=0;
        while(t[j] != '\0') {
            if(s[i] == t[j]) {
                i++; j++;
            }
            else j++;
        }
        return (s[i] == '\0');
    }
int main() {
    string s,t;
    cin >> s >> t;
    cout << (isSubsequence(s,t) ? "true" : "false");
    return 0;
}