class Solution {
public:
    bool desired(vector<int>&freq){
        return(freq[0]>0&&freq[1]>0&&freq[2]>0 );
    }
    int numberOfSubstrings(string s) {
        vector<int>freq(3,0);
        int ans=0;
        int n=s.length();
        int left=0,right=0;
        while(right<n){
            char ch=s[right];
            freq[ch-'a']++;
            while( desired(freq)){
                ans+=n-right;
                freq[s[left]-'a']--;
                left++;

            }
            right++;
        }
        return ans;
        
    }
};