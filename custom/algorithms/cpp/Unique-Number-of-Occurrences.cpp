// Source : https://leetcode.com/problems/unique-number-of-occurrences/
// Author : Manu Gond
// Date   : 2019-10-06

/***************************************************************************************************** 
*	Given an array of integers arr, write a function that returns true if and only if the number of occurrences of each value in the array is unique.
*	
*	 
*
*	Example 1:
*	
*	Input: arr = [1,2,2,1,1,3]
*	Output: true
*	Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
*	Example 2:
*	
*	Input: arr = [1,2]
*	Output: false
*	Example 3:
*	
*	Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
*	Output: true
*	 
*	
*	Constraints:
*	
*	1 <= arr.length <= 1000
*	-1000 <= arr[i] <= 1000
 ******************************************************************************************************/
#include <vector>
#include <map>
using namespace std;
std::vector<int> arr;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      std::map<int, int> mMy;
      for (auto i : arr) {
        mMy[i]++;
      }
      std::vector<int> vCount;
      for (auto i : mMy) {
       vCount.push_back(i.second);
      }
      sort(vCount.begin(),vCount.end());
      int temp;
      for (auto i : vCount) {
        if (temp==i){
          return false;
        }else{
          temp=i;
        }
      }
      return true;
    }
};


