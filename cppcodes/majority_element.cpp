/*
1. take the first element as majority element
2. if the next element is same as first then increase the counter
3. if the next element is different then decrease the counter
4. if counter < 0 then change the majority element and reset the counter to zero
5. return the last value of majority element
*/

#include  <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mode = nums[0];
        int counter = 0;
        for (int i=1; i<nums.size(); i++) {
            if (nums[i] == mode) counter++;
            else counter--;
            if (counter < 0) {
                counter = 0;
                mode = nums[i];
            }
        }
        return mode;
    }
};