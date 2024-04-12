class Item:
    def __init__(self,val,w):
        self.value = val
        self.weight = w

class Solution:    
    #Function to get the maximum total value in the knapsack.
    def fractionalknapsack(self, W,arr,n):
        items = [(arr[i].value, arr[i].weight, arr[i].value/arr[i].weight) for i in range(n)]
        filled = 0
        maxvalue = 0
        items.sort(key = lambda x: x[2], reverse=True)
        
        for it in items:
            if filled == W: return maxvalue
            elif (filled + it[1]) <= W:
                filled += it[1]
                maxvalue += it[0]
            elif (filled + it[1]) > W:
                maxvalue += (W - filled)*it[0]/it[1]
                filled += (W - filled)
        return maxvalue
