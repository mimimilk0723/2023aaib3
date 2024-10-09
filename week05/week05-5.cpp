///Leetcode 058
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//可將字串string變成cout的iostream
        string word;
        while( ss >> word ){//一直讀,講完才離開
            //裡面什麼都不放
        }
        return word.length();
    }
};