
class Job:
    def __init__(self,profit=0,deadline=0):
        self.profit = profit
        self.deadline = deadline
        self.id = 0

class Solution:
    def JobScheduling(self,Jobs,n):
        Jobs.sort(key=lambda x: x.profit, reverse=True)
        maxDeadline = max([Jobs[i].deadline for i in range(n)])
        results = [-1]*(maxDeadline+1)
        profit = jobs = 0
        curr = maxDeadline - 1
        for i in range(n):
            for j in range(Jobs[i].deadline,0,-1):
                if results[j] == -1:
                    results[j] = Jobs[i].id
                    profit += Jobs[i].profit
                    jobs += 1
                    break
        return jobs, profit







        