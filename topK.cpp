//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
 vector<int> ans;
    unordered_map<int, int> mp;  // Use unordered_map for better performance

    // Calculate the frequency of each element
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    priority_queue<pair<int, int>> pq;  // Use a priority_queue of pairs (element, frequency)

    for (const auto& entry : mp) {
        pq.push({entry.second, entry.first});
    }

    for (int i = 0; i < k; i++) {
        ans.push_back(pq.top().second); // Get the element with the highest frequency
        pq.pop();
    }

    return ans;

    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
