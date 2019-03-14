#include <iostream>

using namespace std;

int permutations(int x){
    return x;
}

int main(){
    int Rooks = 4;
    int size = 4;
    string board[size][size];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            board[i][j] = "-";
        }
    }
    srand(time(NULL));
    int r = 0;
    int c = 0;
    for(int i = 0; i < size; i++){
        board[i][i] = "R";
    }
    int counter = 1;
    int permutations = permutations(size);
    for(int i = 0; i < )
}