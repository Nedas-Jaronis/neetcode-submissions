class Solution:
    def minOperations(self, logs: List[str]) -> int:
        main = 0
        for log in logs:
            if main < 0:
                main = 0
            if(log == "../"):
                main -= 1
            elif (log == "./"):
                continue
            else:
                main += 1
        
        if main < 0:
            main = 0
        
        return main