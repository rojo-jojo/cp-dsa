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
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int> ans;
        int mode1;
        int counter1 = 0;
        int mode2, counter2 = 0;
        for (int i=0; i<nums.size(); i++) {
            if (counter1 == 0 && nums[i] != mode2) {
                counter1 = 1;
                mode1 = nums[i];
            }
            else if (counter2 == 0 && nums[i] != mode1) {
                counter2 = 1;
                mode2 = nums[i];
            }

            
            else if (nums[i] == mode1) counter1++;
            else if (nums[i] == mode2) counter2++;
            else {
                counter1--;
                counter2--;
            }
        }

        int countMode1 = count(nums.begin(), nums.end(), mode1);
        int countMode2 = count(nums.begin(), nums.end(), mode2);
        if (countMode1 > floor(nums.size()/3)) ans.push_back(mode1);
        if (countMode2 > floor(nums.size()/3) && mode1 != mode2) ans.push_back(mode2);
        return ans;
    }
};