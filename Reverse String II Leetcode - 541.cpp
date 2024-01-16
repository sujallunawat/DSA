class Solution {
public:
    string doSwap(string s, int i, int j) {
        while (i < j) {
            swap(s[i++], s[j--]);
        }
        return s;
    }

    string reverseStr(string s, int k) {
        int i = 0;
        while (i < s.length()) {
            int j = min(i + k - 1, int(s.length()) - 1);
            s = doSwap(s, i, j);
            i += 2 * k;
        }

        // Check if there are fewer than k characters left to reverse
        if (i - s.length() < k) {
            s = doSwap(s, i, s.length() - 1);
        }

        return s;
    }
};
