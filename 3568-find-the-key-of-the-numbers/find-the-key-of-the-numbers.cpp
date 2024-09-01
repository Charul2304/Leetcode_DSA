class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string n1 = to_string(num1);
        string n2 = to_string(num2);
        string n3 = to_string(num3);
        n1 = string(4 - n1.size(), '0') + n1;
        n2 = string(4 - n2.size(), '0') + n2;
        n3 = string(4 - n3.size(), '0') + n3;
        string key = "";
        for (int i = 0; i < 4; i++) {
            key += min({n1[i], n2[i], n3[i]});
        }
        int ans = stoi(key);
        return ans;
    }
};