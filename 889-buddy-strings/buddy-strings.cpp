class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        int k = 0;
        int n = s.size();

        if(n!=goal.size()) return false;

        int fst = -39;
        int scnd = 0;

        for (int i = 0; i<n; i++) {

            if (s[i]!=goal[i]) {
                k++;

                if (fst == -39) {
                    fst = i;
                }
                else {
                    scnd = i;
                }

            }

        }

        if (k==2) {
            if (s[fst] == goal[scnd] && s[scnd] == goal[fst]) return true;
        }
        
        if (k == 0) {

            unordered_map<char, int> mp;

            for (int i = 0; i<n; i++) {
                
                mp[s[i]]++;
                
                if (mp[s[i]]>=2) {
                    return true;
                }

            }

        }

        return false;

    }
};