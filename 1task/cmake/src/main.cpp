#include <bits/stdc++.h>
#include "lib.h"


using namespace std;

int main(){

    auto start = time(0);
    string res;
    // cin >> res;
    res = "ok";
    auto _hash = myhash(res);
    cout << "HASH = " << _hash << endl << endl;

    if(res == "ok"){
        draw();
        return 0;
    }

    if(res == "no"){
        cout << "NO\n";
        cout << 0.001 * (time(0) - start) << " seconds" << endl;
    }

    cout << "DONE" << endl;
    return 0;
}
