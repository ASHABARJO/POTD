//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
int solve(int idx, int n, int k, int prices[]) {
         vector<pair<int, int>> stockPrices;
    for (int i = 0; i < n; i++) {
        stockPrices.push_back({prices[i], i + 1});
    }

    // Sort the stock prices based on their values
    sort(stockPrices.begin(), stockPrices.end());

    int maxStocksBought = 0;
    int i = 0;

    // Iterate through the sorted stock prices
    while (i < n && k > 0) {
        int stocksOnCurrentDay = min(k / stockPrices[i].first, stockPrices[i].second);
        // Buy as many stocks as possible on the current day
        maxStocksBought += stocksOnCurrentDay;
        // Update remaining money
        k -= stocksOnCurrentDay * stockPrices[i].first;
        i++;
    }

    return maxStocksBought;

    }

    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        return solve(0,n,k,price);
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends
