#include<bits/stdc++.h>
using namespace std;

bool find_word(vector<vector<char>> &board, string word, int row,int col,int index,int n,int m){
    if(index == word.length()){
        return true;
    }
    if(row<0||col<0||row == n||col == m||board[row][col] == '!'|| board[row][col] != word[index]){
        return false;
    }
    char c = board[row][col];
    board[row][col] = '!';

    bool top = find_word(board,word,row - 1,col,index+1,n,m);
    bool bottom = find_word(board,word,row + 1,col,index+1,n,m);
    bool left = find_word(board,word,row,col-1,index+1,n,m);
    bool right = find_word(board,word,row ,col+1,index+1,n,m);
    
    board[row][col] = c;
    return top || right || bottom || left;

}

bool first(vector<vector<char>> &mat,string word, int n,int m){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(word[0]==mat[i][j]){
                if(find_word(mat,word,i,j,n,m)){
                    return true;
                }
            }
        }
    }
    return false;
}