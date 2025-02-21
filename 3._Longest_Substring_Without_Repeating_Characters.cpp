class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char, pair<int,int>> m;
        int l = 0, max_l = 0;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]].first++;
            l++;
            if (m[s[i]].first > 1) {
                i = m[s[i]].second;
                m.clear();
                l = 0;
                continue;
            }
            m[s[i]].second = i;
            if (l > max_l) max_l = l;
            
        }
        return max_l;
    }
};
