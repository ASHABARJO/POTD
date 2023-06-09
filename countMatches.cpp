class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
   int cnt=0;
   int rulK;
   if(ruleKey=="type")
   rulK=0;
   else if(ruleKey=="color")
   rulK=1;
   else
   rulK=2;

   for(int i=0;i<items.size();i++){
       if(items[i][rulK]==ruleValue)
       cnt++;
   }      
   return cnt;
    }
};
