class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split(' ')
        s1 = []
        for i in s:
            if i is not '':
                s1.append(i)
        return " ".join(s1[::-1])
        
