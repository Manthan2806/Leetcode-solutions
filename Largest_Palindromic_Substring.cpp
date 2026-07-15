
class Solution {
public:
    string oddCheck(string t,int l,int r)
    {
        
        while(l>=0 && r<t.size() && t[l]==t[r])
        {
            l--;
            r++;
          
        }
        if(l<0)
        return t.substr(0,r-l-1);
        else
        return t.substr(l+1,r-l-1);
    }

    string evenCheck(string t,int l,int r)
    {
        while(l>=0 && r<t.size() && t[l]==t[r])
        {
            l--;
            r++;
        }
        if(l<0)
        return t.substr(0,r-l-1);
        else
          return t.substr(l+1,r-l-1);
    }
    string longestPalindrome(string s) {
        string ans="";
        string temp="";
        int left,right;
        for(int i=0;i<s.size();i++)
        {
            temp=oddCheck(s,i,i);
            if(temp.size()>ans.size())
            ans=temp;
            temp=evenCheck(s,i,i+1);
            if(temp.size()>ans.size())
            ans=temp;
        }
        return ans;
    }
};