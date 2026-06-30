class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int len = 0;
        int left = 0, answer = 0, maxCount = 0;

        for(int right = 0; right < s.length(); right++){
            count[s[right]]++;
            maxCount = max(maxCount, count[s[right]]);

            
            if(right - left + 1 - maxCount > k){
                count[s[left]]--;
                left++;
            }
            
            answer = max(answer, right - left + 1);
        }

        return answer;
    }
};
