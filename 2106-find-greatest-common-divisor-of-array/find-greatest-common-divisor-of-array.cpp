class Solution {
public:
    int findGCD(vector<int>& nums) {
        int largest=0;
        int smallest=10001;
        for( int val:nums){
            if( val>largest)
            {
                
                largest=val;
                
            }
        
            if(  val<smallest)
            smallest=val;
        }
        return gcd(largest,smallest);
        
    }
};