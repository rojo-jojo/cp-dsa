class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        ans = []
        res = set()


        def fun(index: int, ds: List[int]):
            if index == len(nums):
                ds.sort()
                res.add(tuple(ds))
                return
            ds.append(nums[index])
            fun(index + 1, ds)
            ds.pop()
            fun(index + 1, ds)
        fun(0, [])
        for it in res:
            ans.append(list(it))
        return ans