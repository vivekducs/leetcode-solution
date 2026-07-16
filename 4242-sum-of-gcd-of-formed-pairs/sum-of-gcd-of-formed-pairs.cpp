class Solution {
public:
    int gcd( int a, int b){
        if( b==0)
        return a;
     
        return gcd( b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        long long result=0;
        vector<int>prefixGcd;
        int maxi=0;
        for( int num:nums){
            maxi=max(maxi,num);
            prefixGcd.push_back( gcd( maxi,num));
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int i=0,  j=n-1;
        while( i<j){
            result+=gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
            

        }
        return result;

        
    }
};