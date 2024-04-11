class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakpoint=-1, n = nums.size();

        for (int i=n-1; i>0; i--) {
            if (nums[i-1] < nums[i]) {
                breakpoint = i-1;
                break;
            }
        }
        cout << "breakpoint is : "<< breakpoint;
        if (breakpoint == -1) {
            sort(nums.begin(), nums.end());
            return;
        }
        sort(nums.begin()+breakpoint, nums.end());
        swap(nums[breakpoint], nums[breakpoint+1]);
    }
};