class Solution:
    def validPalindrome(self, s: str) -> bool:
        '''

        '''
        def isPalindrome(word):
            l = 0
            r = len(word) - 1
            while (l <= r):
                if word[l] == word[r]:
                    l += 1
                    r -=1
                else:
                    return False
            return True
        
        if isPalindrome(s):
            return True
        
        word_arr = [c for c in s]
        for i in range(len(s)):
            tmp = word_arr[i]
            word_arr[i] = ""
            new_word = "".join(word_arr)
            if isPalindrome(new_word):
                return True
            word_arr[i] = tmp
        
        return False

            