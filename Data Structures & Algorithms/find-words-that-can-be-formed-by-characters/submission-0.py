class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        counts = [Counter(w) for w in words]
        best = 0
        for c in counts:
            temp = Counter(chars)
            if all([k in temp for k in c.keys()]) and all([temp.get(k, 0)-v >= 0 for k, v in c.items()]):
                best += sum(c.values())
        return best
