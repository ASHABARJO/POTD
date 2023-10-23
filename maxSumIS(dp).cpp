 int dp[n+1];
	    for(int i=0;i<n;i++)
	    dp[i]=arr[i];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i])
	            dp[i]=max(dp[i],dp[j]+arr[i]);
	        }
	    }
	    int mx=0;
	    for(int i=0;i<n;i++){
	        mx=max(mx,dp[i]);
	    }
	    return mx;
