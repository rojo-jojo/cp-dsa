class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        candidates.sort()

        def backtrack(curr, pos, target):
            if target == 0:
                res.append(curr[::])
            if target <= 0:
                return
            prev = -1
            for i in range(pos, len(candidates)):
                if candidates[i] == prev:
                    continue
                curr.append(candidates[i])
                backtrack(curr, i+1, target - candidates[i])
                curr.pop()
                # backtrack(curr, i + 1, target)
                prev = candidates[i]
        backtrack([], 0, target)
        return res