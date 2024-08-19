class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        string res = "";
        int i = n - 1;

        while (i >= 0) {
            if (s[i] == '#') {
                if (i >= 2) {  // Ensure i-1 and i-2 are valid indices
                    int num = (s[i-2] - '0') * 10 + (s[i-1] - '0');
                    res += (num - 1 + 'a');
                    i -= 3;
                }
            } else {
                res += (s[i] - '0' - 1 + 'a');
                i--;
            }
        }

        reverse(res.begin(), res.end());  // Reverse the result since we built it backwards
        return res;
    }
};
