#User function Template for python3

class Solution:

    def findMinDiff(self, arr,M):
        arr.sort()
        i = 0
        j = M-1
        minimum = 9999999999999
        while(j<len(arr)):
            if (arr[j]-arr[i])<minimum:
                minimum = arr[j]-arr[i]
            i+=1
            j+=1
        return minimum
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):

        A = [int(x) for x in input().split()]
        M = int(input())

        solObj = Solution()

        print(solObj.findMinDiff(A, M))
        print("~")

# } Driver Code Ends