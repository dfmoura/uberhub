#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,b;
    cin >> n;
    vector<string> v;
    for (int i = 0; i <= n; i++) {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    string m;
    cin>>m;
    for (const auto& s : v) {
        istringstream iss(s);
        vector<string> palavra;
        for (string palavras; iss >> palavras; ) {
            palavra.push_back(palavras);
        }
        if (palavra.size() >= 2) {

                cout<< palavra.back()<<" ";

            
        } 
    }
    cout<<endl;

}

//cout<< palavra.back()<<" ";