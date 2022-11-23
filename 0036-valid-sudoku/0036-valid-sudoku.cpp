class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0; i<9; i++)
        {
            vector<int>digit(10,0);
            for(int j=0; j<9; j++)
            {
                if(board[i][j] >= '1' && board[i][j] <= '9' ){
                    
                    if(digit[board[i][j] - '1'] == 0){
                        digit[board[i][j] - '1']++;
                    }else{
                        return false;
                    }
                }
            }
        }
        for(int j=0; j<9; j++)
        {
            vector<int>digit(10,0);
            for(int i=0; i<9; i++)
            {
                if(board[i][j] >= '1' && board[i][j] <= '9' ){
                    
                    if(digit[board[i][j] - '1'] == 0){
                        digit[board[i][j] - '1']++;
                    }else{
                        return false;
                    }
                }
            }
        }
        for(int i=0; i<9; i+=3)
        {
            for(int j=0; j<9; j+=3){
                vector<int>digit(10,0);
                for(int k=i; k<=i+2 ; k++){
                    
                        if(board[k][j] >= '1' && board[k][j] <= '9' ){

                            if(digit[board[k][j] - '1'] == 0){
                                digit[board[k][j] - '1']++;
                            }else{
                                return false;
                            }

                        }

                        if(board[k][j+1] >= '1' && board[k][j+1] <= '9' ){

                            if(digit[board[k][j+1] - '1'] == 0){
                                digit[board[k][j+1] - '1']++;
                            }else{
                                return false;
                            }
                        }

                        if(board[k][j+2] >= '1' && board[k][j+2] <= '9' ){

                            if(digit[board[k][j+2] - '1'] == 0){
                                digit[board[k][j+2] - '1']++;
                            }else{
                                return false;
                            }
                        }
                    }
            }
        }
        return true;
    }
};