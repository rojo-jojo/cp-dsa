class Meeting:
    def __init__(self, start, end, pos):
        self.start = start
        self.end = end
        self.pos = pos

class Solution:
    
    #Function to find the maximum number of meetings that can
    #be performed in a meeting room.
    def maximumMeetings(self,n,start,end):
        # code here
        ans = []
        meets = [Meeting(start[i], end[i], i+1) for i in range(n)]
        sorted(meets, key=lambda x: (x.end, x.pos))
        ans.append(meets[0].pos)
        limit = meets[0].end
        for i in range(1, n):
            if meets[i].start > limit:
                limit = meets[i].end
                ans.append(meets[i].pos)
        return len(ans)