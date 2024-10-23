class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=1;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<board[i][j]<<' ';
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};
        myDrawBoard(board);
        for(auto move : moves){    //step01: C++進階迴圈
            int i =  move[0], j= move[1];  //step02:取出陣列裡的值
            board[i][j] = 1;
            myDrawBoard(board);
        }
        
        return "B";
    }
};