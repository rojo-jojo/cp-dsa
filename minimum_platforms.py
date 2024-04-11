class Train:
    def __init__(self, arr, dep, pos):
        self.arr = arr
        self.dep = dep
        self.pos = pos

class Solution:    
    #Function to find the minimum number of platforms required at the
    #railway station such that no train waits.
    def minimumPlatform(self,n,arr,dep):
        trains = [Train(arr[i], dep[i], i+1) for i in range(n)]
        platforms = []
        platforms.append(trains[0].pos)
        lasttime = trains[0].dep
        for i in range(1,n):
            if train[i].arr > lasttime:
                lasttime = train[i].dep
            else:
                platforms