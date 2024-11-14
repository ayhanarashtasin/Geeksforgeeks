#User function Template for python3

class Solution:

    def candyStore(self, candies,N,K):
        candies.sort()
        mini = 0
        buy = 0
        free = N-1
        while(buy<=free):
            mini+=candies[buy]
            buy+=1
            free-=K
        maxi = 0
        buy = N-1
        free = 0
        while(free<=buy):
            maxi+=candies[buy]
            buy-=1
            free+=K
        return [mini , maxi]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):

        N,K = [int(x) for x in input().split()]
        candies = [int(x) for x in input().split()]

        solObj = Solution()

        print(*solObj.candyStore(candies,N,K))
        print("~")
# } Driver Code Ends