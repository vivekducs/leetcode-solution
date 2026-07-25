class Solution:
    def maxProduct(self, n: int) -> int:
        val=str(n)
        first,second=0,0
        for ch in val:
            char=int(ch)
            if char>first:
                second=first
                first=char
                
            elif char>second:
                second=char
        return first*second


        