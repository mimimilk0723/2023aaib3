class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        ///��z: S+S���Y��
        string s2 = s+s;
        int N = s2.length();
        //cout<<string::npos
        return s2.substr(1,N-2).find(s) != string::npos; ///npos����:�S���o�Ӧ�m,�ܤj�ܤj

    }//substr()���r�� ��1 �k1(���ӬO0...N-1 �{�b�ܦ�1....N-2)
};
