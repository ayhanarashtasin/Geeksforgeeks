//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    {
        int maxlen = 0;
        int sum=0;
        map<long long , int>premap;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum==k){
                maxlen = max(maxlen,i+1);
            }
            long long rem = sum-k;
            if(premap.find(rem)!=premap.end()){
                maxlen = max(maxlen,i-premap[rem]);
            }
            if(premap.find(sum)==premap.end()){
                premap[sum] = i;
            }
        }
        return maxlen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends