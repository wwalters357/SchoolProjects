#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

unsigned long makeKey(string str){
    unsigned long key = 0;
    for(char c : str){
        auto x = (int) c;
        key += x;
    }
    key %= 10;
    return key;
}

void StoreMag(const string &f, vector<vector<string>> &temp){
    string str;
    ifstream file;
    file.open(f);
    while(file >> str){
        long unsigned x = makeKey(str);
        temp[x].push_back(str);
    }
}

string compare(vector<string> ransom, vector<vector<string>> mag){
    for(int i = 0; i < ransom.size(); i++){
        string str = static_cast<basic_string<char, char_traits<char>, allocator<char>> &&>(ransom.at(i));
        unsigned long x = makeKey(str);
        ransom.pop_back();
        bool found = false;
        int k = 0;
        for(const auto &word : mag.at(x)){
            if(word == str){
                found = true;
                mag[x].erase(mag[x].begin() + k);
                break;
            }
            k++;
        }
        if(!found)
            return "False";
    }
    return "True";
}

int main(){
    ifstream fileR;
    fileR.open("RansomNote.dat");
    string str;
    vector<string> ran;
    while(fileR >> str) {
        ran.push_back(str);
    }
    fileR.close();

    vector<vector<string>> Mag1(10);// = StoreMag("Magazine1.dat");
    StoreMag("Magazine1.dat", Mag1);
    vector<vector<string>> Mag2(10);// = StoreMag("Magazine1.dat");
    StoreMag("Magazine2.dat", Mag2);
    vector<vector<string>> Mag3(10);// = StoreMag("Magazine1.dat");
    StoreMag("Magazine3.dat", Mag3);
    vector<vector<string>> Mag4(10);// = StoreMag("Magazine1.dat");
    StoreMag("Magazine4.dat", Mag4);
    vector<vector<string>> Mag5(10);// = StoreMag("Magazine1.dat");
    StoreMag("Magazine5.dat", Mag5);
    vector<vector<string>> Mag6(10);
    StoreMag("Magazine6.dat", Mag6);
    cout << "Magazine1: " << compare(ran, Mag1) << endl;
    cout << "Magazine2: " << compare(ran, Mag2) << endl;
    cout << "Magazine3: " << compare(ran, Mag3) << endl;
    cout << "Magazine4: " << compare(ran, Mag4) << endl;
    cout << "Magazine5: " << compare(ran, Mag5) << endl;
    cout << "Magazine6: " << compare(ran, Mag6) << endl;

    return 0;
}