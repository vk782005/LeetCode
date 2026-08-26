class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> t;

        int left = 0;
        int ones = 0;

        for (int right = 0; right < s.length(); right++) {

            if (s[right] == '1')
                ones++;

            // We have exactly k ones
            while (ones == k) {
                t.push_back(s.substr(left, right - left + 1));

                if (s[left] == '1')
                    ones--;

                left++;
            }
        }

        if (t.empty())
            return "";

        // Find shortest length
        int minLen = INT_MAX;

        for (string x : t) {
            minLen = min(minLen, (int)x.length());
        }

        
        string ans = "";

        for (string x : t) {
            if (x.length() == minLen) {
                if (ans == "" || x < ans)
                    ans = x;
            }
        }

        return ans;
    }
};