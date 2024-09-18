class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] ={}; ///開陣列
        for(char c : s){ ///針對左邊的字串 裡面每個字c
            H[c]++; ///把Histogram統計圖資料H[c]+1多一次
        }
        for(char c : t){ ///針對右邊的字串t 裡面的每個字c
            H[c]--; ///用掉剛剛累積的那個H[c]++;
            if(H[c]<0) return c; ///抓到

        }
        return 0;
    }
};