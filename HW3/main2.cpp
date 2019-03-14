#include <iostream>
#include <set>

using namespace std;

void intersection(set<int> S1, set<int> S2){
    cout << "Intersection: ";
    for(auto i : S1) {
        if (S2.find(i) != S2.end())
            cout << i << " ";
    }
    cout << endl;
}

void findUnion(set<int> S1, set<int> S2){
    cout << "Union: ";
    set<int> S3;
    for(auto i : S1)
        S3.insert(i);
    for(auto i : S2)
        S3.insert(i);
    for(auto i : S3)
        cout << i << " ";
    cout << endl;
}

int main()
{
    int N1 = 50;
    set<int> S1;
    srand(time(NULL));
    for(int i = 0; i < N1; i++){
        int x = rand() % 401;
        if(S1.find(x) != S1.end()){
            i--;
        }
        S1.insert(x);
    }
    int N2 = 60;
    set<int> S2;
    for(int i =0; i < N2; i++){
        int y = rand() % 601 + 200;
        if(S2.find(y) != S2.end()){
            i--;
        }
        S2.insert(y);
    }
    cout << "S1: ";
    for(auto i : S1){
        cout << i << " ";
    }
    cout << endl << "S2: ";
    for(auto i : S2){
        cout << i << " ";
    }
    cout << endl;
    intersection(S1, S2);
    findUnion(S1, S2);
    return 0;
}