/*
* ID: LeetCode 859
* Link: https://leetcode.com/problems/buddy-strings/description/
* Author: SashiRin
* Date: 2018-07-20
* Note: Using set for duplicate elements detection.
*/
class Solution {
public:
	bool buddyStrings(string A, string B) {
		if (A.length() != B.length()) {
			return false;
		} else if (A == B && set<char>(A.begin(), A.end()).size() < A.length()) {
			return true;
		} else {
			vector<int> diffVec;
			for (int i = 0; i < A.length(); ++i) {
				if (A[i] != B[i]) {
					diffVec.push_back(i);
				}
			}
			return (diffVec.size() == 2 && A[diffVec[0]] == B[diffVec[1]] && A[diffVec[1]] == B[diffVec[0]]);
		}
	}
};
