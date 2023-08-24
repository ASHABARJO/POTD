//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    
    string multiplyStrings(string s1, string s2) {
      vector<int>res(s1.size()+s2.size(),0);
       bool temp=true;
        if(s1[0]=='-'&&s2[0]=='-'){
           s1.erase(s1.begin(),s1.begin()+1);
           s2.erase(s2.begin(),s2.begin()+1);
       }
       else if(s1[0]=='-'||s2[0]=='-'){
           temp=!temp;
           if(s1[0]=='-'){
               s1.erase(s1.begin(),s1.begin()+1);
           }
           else if(s2[0]=='-'){
             s2.erase(s2.begin(),s2.begin()+1);  
           }
       }
      
      
       
       int i1=0;
       int i2=0;
       for(int i=s1.size()-1;i>=0;i--){
           int carry=0;
            int n1=s1[i]-'0';
            i2=0;
           for(int j=s2.size()-1;j>=0;j--){
              
               int n2=s2[j]-'0';
               int sum=n1*n2+carry+res[i1+i2];
               carry=sum/10;
               res[i1+i2]=sum%10;
               i2++;
           }
           if (carry > 0)
            res[i1 + i2] += carry;
            i1++;
       }
    int i = res.size() - 1;
    while (i>=0 && res[i] == 0)
    i--;
    if (i == -1)
    return "0";
    string s = "";
    while (i >= 0)
        s += std::to_string(res[i--]);
       
    if(!temp){
        s='-'+s;
    }
       return s;
       
    
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends
