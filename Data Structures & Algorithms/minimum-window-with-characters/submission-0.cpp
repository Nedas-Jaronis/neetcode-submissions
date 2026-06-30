class Solution {
public:
    string minWindow(string s, string t) {
        int left = 0, have = 0, needCount = 0;
        int resLen = INT_MAX;
        int resStart = 0;
        int min = 0;
        unordered_map<char, int> need;
        unordered_map<char, int> window;

        for(int i = 0; i < t.length(); i++){
            need[t[i]]++;
        }
        needCount = need.size();

        for(int right = 0; right < s.length(); right++){
            char c = s[right];
            window[c]++;
            if(need.count(c) && window[c] == need[c]) have++;

            while (have == needCount) {
                if(right - left + 1 < resLen){
                    resLen = right - left + 1;
                    resStart = left;
                }
                window[s[left]]--;
                if (need.count(s[left]) && window[s[left]] < need[s[left]]) have--;
                left++;
            }
        }

        return resLen == INT_MAX ? "" : s.substr(resStart, resLen);
    }
};
