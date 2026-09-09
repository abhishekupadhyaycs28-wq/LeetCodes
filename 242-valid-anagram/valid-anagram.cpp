class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int fr[26] = {0};

        int n = s.size();
        int m = t.size();

        if(m!=n) return false;

        for (int i = 0; i<n; i++) {

            fr[int(s[i])-97]++;

        }
        for (int i = 0; i<m; i++) {

            fr[int(t[i])-97]--;

        }

        for (int i = 0; i<n; i++) {
            
            if ((fr[int(s[i])-97]) != 0) {
                return false;
            }
            
        }

        return true;

    }
};