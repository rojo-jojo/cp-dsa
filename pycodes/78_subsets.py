class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []
        def subs(ind, curr):
            if ind >= len(nums):
                res.append(curr[::])
                return
            curr.append(nums[ind])
            subs(ind+1, curr)
            curr.pop()
            subs(ind + 1, curr)
        subs(0, [])
        return res