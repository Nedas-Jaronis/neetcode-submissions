class Solution:
    def customSortString(self, order: str, s: str) -> str:
        orderInd = {}
        for i in range(len(order)):
            orderInd[order[i]] = i
        
        res = list(s)
        res.sort(key=lambda c: orderInd.get(c, -1))
        return "".join(res)