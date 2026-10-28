
class Solution {
public:
    int totalNumbers(vector<int>& arr) {
        unordered_map<int, int> s;
        int count = 0;

        for (auto x : arr) s[x]++;

        for (int i = 100; i < 999; i += 2) {
            int x = i;
            int a = x % 10;
            x = x / 10;
            int b = x % 10;
            x = x / 10;
            int c = x;

            if (s[a] > 0) {
                s[a]--;

                if (s[b] > 0) {
                    s[b]--;

                    if (s[c] > 0) {
                        count++;
                    }

                    s[b]++;
                }

                s[a]++;
            }
        }

        return count;
    }
};
