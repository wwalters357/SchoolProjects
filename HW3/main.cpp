#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cmath>

using namespace std;

int main1() {
    int N = 12;
    map<string, int> people;
    int arr[10];
    ifstream ifs("test.txt");
    int count = 0;
    for(string line; getline(ifs, line);){
        string name, temp;
        int score;
        stringstream ss(line);
        if(ss >> name){
            if(ss >> temp){
                score = stoi(temp);
                if(score > 100 || score < 0) {
                    cout << "Error!";
                    return 1;
                }
                people[name] = score;
                arr[count++] = score;
            }
        }
    }
    sort(arr, arr + N);
    int half = floor((N - 1) / 2);
    if(N % 2 == 0)
        cout << "Median: " << (arr[half] + arr[half + 1]) / 2 << endl;
    else
        cout << "Median: " << arr[half] << endl;
    return 0;
}