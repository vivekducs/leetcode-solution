class Solution {
public:
    long long countCommas(long long n) {
         long p=1000;
        long ans=0;
        while(p<=n){
            ans+=n-p+1;
            p*=1000;

        }
        return ans;
        
    }
};