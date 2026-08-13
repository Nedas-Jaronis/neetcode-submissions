class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for c in s:
            if(c == '(' or c == '{' or c == '['):
                stack.append(c)
            elif((c == ')' or c == ']' or c == '}') and len(stack) == 0):
                return False
            else:
                if(len(stack) > 0):
                    if(c == ')' and stack[-1] == '('):
                        stack.pop()
                    elif(c == ']' and stack[-1] == '['):
                        stack.pop()
                    elif(c == '}' and stack[-1] == '{'):
                        stack.pop()
                    else:
                        return False
        
        if(len(stack) == 0): 
            return True
        else:
            return False