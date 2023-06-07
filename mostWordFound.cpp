class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
     int Max=0;
     for(int i=0;i<sentences.size();i++)
     {int count=0;
     string t=sentences[i];
     for(int j=0;j<t.size();j++){
     if(t[j]==' ')
     count++;
     }   
     Max=max(Max,count);
     }
     return Max+1;
    }
};
