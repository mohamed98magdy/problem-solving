class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        // Step 1: Remove non-alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        // Step 2: Check if the cleaned string is a palindrome
        int n = cleaned.size();
        for (int i = 0; i < n / 2; i++) {
            if (cleaned[i] != cleaned[n - i - 1])
                return false;
        }

        return true;
    }
};
