// There will be four cases to deal with:
// 1-->  spaces at the beginning   " hello"
// 2-->  spaces at the end  "hello "
// 3-->  sapces in between two words (if one space)  "hello world"
// 4-->  sapces in between two words (if multiple space)  "hello  world"


class Solution {
public:
    string reverseWords(string s) {
        string temp = ""; // To store words taken out from the string
        string ans = ""; // To store the reversed string

        // making left point to first non space char
        int left = 0;
        while (s[left] == ' ') {
            left++;
        }

        // making right point to last non space char
        int right = s.length() - 1;
        while (s[right] == ' ') {
            right--;
        }

        while (left <= right) { // Looping through the string
            if (s[left] != ' ') { // storing words in temp string
                temp += s[left];
            }
            else {
                if (s[left - 1] == ' ') {  // dealing with case 4
                    left++;
                    continue;
                }
                else {
                    ans = temp + " " + ans; // storing taken word in ans string with a space
                    temp = "";  // Making temp empty so that it can perform it's operation again
                }
            }
            left++;  //  as we are using while loop so incrementation is necessary otherwise TLE
        }
        ans = temp + " " + ans; // storing taken word in ans string with a space
        ans.erase(ans.begin() + ans.length() - 1); // to erase extra space at the end
        return ans;
    }
};