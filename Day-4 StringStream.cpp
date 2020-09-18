#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	int a;
    char ch;
    stringstream ss(str);
    vector<int> b;
    while(ss >> a){
        b.push_back(a);
        ss>>ch;
    }
    return b;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
