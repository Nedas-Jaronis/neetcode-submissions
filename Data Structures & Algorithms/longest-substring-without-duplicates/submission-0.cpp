class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int answer = 0;
        set<char> seen;
        
        for(int right = 0; right < s.size(); right++){
            if(seen.count(s[right])){
                while(seen.count(s[right])){
                    seen.erase(s[left]);
                    left++;
                }
            }
            seen.insert(s[right]);
            answer = max(answer, right - left + 1);

        }

        return answer;
    }
};
