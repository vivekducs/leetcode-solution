class Solution {
public:
    int numberOfSubstrings(string s) {

        // v2 trying in differernt way
        int n=s.size();
        vector<int>pos(3,-1);
        int ans=0;
        for( int i=0;i<n;i++){
            pos[s[i]-'a']=i;
            ans+=1+min({pos[0],pos[1],pos[2]});

        }
        return ans;
        
    }
};