//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int Merge(int arr[], int low, int mid, int high) {
        int count = 0;
        int left = low;
        int right = mid + 1;
        vector<int> temp;
        
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                count += (mid - left + 1);  // Count inversions
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
        
        return count;
    }

    int MergeSort(int arr[], int low, int high) {
        int count = 0;
        if (low < high) {
            int mid = low + (high - low) / 2;

            count += MergeSort(arr, low, mid);
            count += MergeSort(arr, mid + 1, high);
            count += Merge(arr, low, mid, high);
        }
        return count;
    }

    long long int inversionCount(vector<int> &arr) {  // Changed to vector<int>
        int n = arr.size();
        vector<int> tempArr(n);

        // Copy vector<int> arr to an array of integers (tempArr)
        for (int i = 0; i < n; i++) {
            tempArr[i] = arr[i];
        }

        // Call MergeSort on the array and count inversions
        return MergeSort(tempArr.data(), 0, n - 1);  // Use `.data()` to get array pointer
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
    }

    return 0;
}

// } Driver Code Ends