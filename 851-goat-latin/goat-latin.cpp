class Solution {
public:
    string toGoatLatin(string sentence) {
        
        string word = "";
        string ans = "";
        int k = 1;

        for (int i = 0; i<=sentence.size(); i++) {

            if (sentence[i] == ' ' || i==sentence.size()) {

                if (word[0] == 'a' || word[0] == 'e' ||
                    word[0] == 'i' || word[0] == 'o' ||
                    word[0] == 'u' || word[0] == 'A' ||
                    word[0] == 'E' || word[0] == 'I' ||
                    word[0] == 'O' || word[0] == 'U') {

                        ans = ans+word;

                }

                else {

                    for (int j = 1; j<word.size(); j++) {
                        ans = ans + word[j];
                    }
                    ans = ans + word[0];

                }

                ans = ans+"ma";

                for (int j = 0; j<k; j++) {
                    ans = ans+'a';
                }

                k++;

                if (i!=sentence.size()) ans = ans + ' ';

                word = "";

            }
            
            else word = word+sentence[i];

        }

        return ans;

    }
};