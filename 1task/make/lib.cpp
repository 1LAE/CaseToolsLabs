#include <bits/stdc++.h>
#include "lib.h"

using namespace std;

void draw(){
    freopen("input", "r", stdin);
    string tmp, res = "";
    
    while(getline(cin, tmp)){
        res += tmp + '\n';
    }
   
    cout << res << endl;
}

int myhash(string s){

    int res = 0;
    for(int i = 0; i < s.size(); i++){
        res = (1ll + res + s[i] * (i + 1)) % (7 + (int)1e9);
    }

    return res;

}
