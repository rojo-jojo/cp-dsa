import math
from typing import List
class Solution:
    def numberOfSubarrays(self, nums: List[int]) -> int:
        prev = nums[0]
        local_cnt = 1
        cnts = []
        ans = 0
        nlen = len(nums)
        if min(nums) == max(nums):
            return int(nlen * (nlen+1)/2)
        for n in nums[1:]:
            if n == prev:
                local_cnt += 1
            else:
                prev = n
                cnts.append(local_cnt)
                local_cnt = 1
        ans += len(nums)
        # print("cnts arr: ", cnts)
        for v in cnts:
            ans += (v * (v+1)/2)
        ans -= sum(cnts)
        return ans

    
if __name__ == '__main__':
    cases = [
        [1,4,3,3,2],
        [3,3,3],
        [1],
        [6,26,6],
        [20,20],
        [9,40,40]
    ]
    for t in cases:
        obj = Solution()
        res = obj.numberOfSubarrays(t)
        print(res)