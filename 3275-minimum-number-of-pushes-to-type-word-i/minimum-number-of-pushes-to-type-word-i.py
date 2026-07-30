class Solution:
    def minimumPushes(self, word: str) -> int:
        n=len(word)
        ans=0
        if n<9:
            ans=n
        elif n<17:
            ans=8+(n-8)*2
        elif n<25:
            ans=24+3*(n-16)
        else:
            ans=48+4*(n-24)
        return ans

        