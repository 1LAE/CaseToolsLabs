#include "bits/stdc++.h"
using namespace std


int main(){
cin.tie(0);
int t;
cin >> t;
                        /* F_CK SPACES */
    // F*CK THIS PROGRAM
	while(t--){int n,kolvo=0; char sim; string str;
bool flag=false, flag2=false, flag3=false, flag4=false, flag5=false, flag6=false, flag7=false, flag8=false, flag9=false;
	cin>>n>>sim>> str;
	vector<int> vec;

	for (int i = 0; i < n; ++i){ // USE THIS aa AA AA AA AA IF NOT SAMPLE THEN DO TMTH OR DIE IF UR NOT ABLE TO
		if (str[i] != sim){
flag = true;
if (((i+1) % 2 != 0) && (flag2 == false)) {vec.push_back(2); kolvo++; flag2 = true; continue;}
/* SOME SHITTY COMMENT*/
else if (((i+1) % 3 != 0) && (flag3 == false)) {vec.push_back(3); kolvo++; flag3 = true; continue;}
else if (((i+1) % 4 != 0) && (flag4 == false)&& n>4) {vec.push_back(4); kolvo++; flag4 = true;
	if(i+1 == n){break;} continue;}





    
		    else if (((i+1) % 5 != 0) && (flag5 == false)&& n>=2*3*4) {vec.push_back(5); kolvo++; flag5 = true;
                    		    	if(i+1 == n){break;} continue;} // GO KILL YOURSELF
                    		    else if (((i+1) % 6 != 0) && (flag6 == false)&& n>=2*3*4*5) {vec.push_back(6); kolvo++; flag6 = true;
                    		    	if(i+1 == n){break;} continue;}
                    		    else if (((i+1) % 7 != 0) && (flag7 == false)&& n>=2*3*4*5*6) {vec.push_back(7); kolvo++; flag7 = true;
		    	if(i+1 == n){break;} continue;}
		    else if (((i+1) % 8 != 0) && (flag8 == false)&& n>=2*3*4*5*6*7) {vec.push_back(8); kolvo++; flag8 = true;
		    	if(i+1 == n){break;} continue;}
		                              else if (((i+1) % 9 != 0) && (flag9 == false)&& n>=2*3*4*5*6*7*8) {vec.push_back(9); kolvo++; flag9 = true;
		    	if(i+1 == n){break;} continue;}
		}/*I HATE EVERYTHING*/
	}
	if (flag == false) cout << 0;
	else{ // GO KILL ALL
	sort(vec.begin(), vec.end());
	cout << kolvo << endl;
	for (int i =    0; i < kolvo; ++i){
		cout <<       vec[i] << ' ';
		}

	} //I HATE EVERYBODY
cout << endl;
}return 0;}
