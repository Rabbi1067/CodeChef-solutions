#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool isVowel(char ch) {
    return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main() {
    int T;
    cin >> T;
    string target = "CODETOWN";
    
    while (T--) {
        string S;
        cin >> S;
        bool canReach = true;
        
        for (int i = 0; i < 8; ++i) {
            if (S[i] == target[i]) continue;

            bool s_is_vowel = isVowel(S[i]);
            bool t_is_vowel = isVowel(target[i]);
            

            if (s_is_vowel != t_is_vowel) {
                canReach = false;
                break;
            }
        }

        cout << (canReach ? "YES" : "NO") << endl;
    }

    return 0;
}
