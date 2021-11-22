#include <bits/stdc++.h>
#include "lib.h"

using namespace std;

void draw(){
    string tmp = "This is a string, hello!\n\nHello!\n\n", res = "";
    res = tmp;
    cout << res << endl;
}

int myhash(string s){

    int res = 0;
    for(int i = 0; i < (int)s.size(); i++){
        res = (1ll + res + s[i] * (i + 1)) % (7 + (int)1e9);
    }

    return res;

}
