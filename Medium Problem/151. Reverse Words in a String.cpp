class Solution {
public:
    string reverseWords(string s) {

        int start = 0, end = s.size() - 1;

        // Trim leading spaces
        while (start <= end && s[start] == ' ') {
            start++;
        }

        // Trim trailing spaces
        while (start <= end && s[end] == ' ') {
            end--;
        }

        // If all spaces
        if (start > end) {
            return "";
        }

        // Trimmed substring
        string trimmed = s.substr(start, end - start + 1);

        // Split into words
        stringstream ss(trimmed);
        vector<string> words;
        string word;

        while (ss >> word) { // The >> operator skips any leading spaces, then reads characters until it hits a space.
            words.push_back(word);
        }

        // Reverse and join words
        string finalresult = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            finalresult += words[i];
            if (i != 0) {
                finalresult += " "; // add space between words
            }
        }
        return finalresult;
    }
};
