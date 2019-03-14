#include <iostream>

using namespace std;

const int SIZE = 4;

void printBoard(string board[SIZE][SIZE]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int rook = 4;
    int size = 4;
    int counter = 1;
    string board[SIZE][SIZE];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            board[i][j] = "-";
        }
    }
    for(int i = 0; i < rook; i++)
        board[i][i] = "R";

    printBoard(board);
    int indexR = 0;
    int indexC = 0;
    for(int i = 0; i < 24; i++){
        board[]
    }
    return 0;
}