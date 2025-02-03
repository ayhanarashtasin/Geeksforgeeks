//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        string s =to_string(n);
        int sum = 0;
        for(auto it:s){
            int val = (it-'0');
            sum+=val;
        }
        string output = to_string(sum);
        string temp = output;
        reverse(output.begin(),output.end());
        if (output==temp){
            return true;
        }
        else{
            return false;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        bool res = ob.isDigitSumPalindrome(N);
        if (res)
            cout << "true"
                 << "\n";
        else
            cout << "false"
                 << "\n";

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends