def subsetSum(num: List[int]) -> List[int]:
    ans = []

    def helper(ind, s):
        if len(num) == ind:
            ans.append(s)
            return
        helper(ind+1, s + num[ind])
        helper(ind+1, s)
    helper(0,0)
    ans.sort()
    return ans