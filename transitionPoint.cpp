class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
      int i=0;
      int j=n-1;
      int ans=-1;
      while(i<=j){
      int mid=i+(j-i)/2;
          if(arr[mid]==1)
          {
          j=mid-1;
          ans=mid;
          }
          else
          i=mid+1;
          
          
         
      }
      return ans;
    }
};
