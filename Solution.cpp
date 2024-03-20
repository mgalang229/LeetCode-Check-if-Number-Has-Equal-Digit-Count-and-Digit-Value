class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        int freq[10];
        memset(freq, 0, sizeof(freq));
        for (char& d : num) {
            freq[d-'0']++;
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            ok &= (freq[i] == num[i] - '0');
        }
        return ok;
    }
};
