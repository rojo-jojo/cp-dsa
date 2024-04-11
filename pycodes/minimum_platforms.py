'''

arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
Thought process
We start from the train that arrives earliest and give it a platform
When the next train comes we check if the arrival[i] > departure[0...i-1]
'''

class Solution:    
    #Function to find the minimum number of platforms required at the
    #railway station such that no train waits.
    def minimumPlatform(self,n,arr,dep):
        arr.sort()
        dep.sort()
        i = 1
        j = 0
        count = countmax = 1
        while i < len(arr) and j < len(dep):
            if arr[i] <= dep[j]:
                count += 1
                i+=1
            else:
                count -= 1
                j += 1
            countmax = max(count, countmax)
        return countmax



