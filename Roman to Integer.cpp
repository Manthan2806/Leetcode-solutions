class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        int ans = 0;
        mp.emplace('I', 1);
        mp.emplace('V', 5);
        mp.emplace('X', 10);
        mp.emplace('L', 50);
        mp.emplace('C', 100);
        mp.emplace('D', 500);
        mp.emplace('M', 1000);
        int i = 0;
        while (i < s.size()) {
            auto it1 = mp.find(s[i]);
            auto it2 = mp.find(s[i + 1]);
            if (i + 1 < s.size() && it1->second < it2->second) {
                ans = ans + it2->second - it1->second;
                i = i + 2;
            } else {
                ans = ans + it1->second;
                i++;
            }
        }

        return ans;
    }
};
