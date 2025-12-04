#include <bits/stdc++.h>
using namespace std;


int main() {
string rot;
int ch,curr=50,prev,diff,temp,pass=0;

for (int i=1;i<=4147;i++) {
	prev = curr;

	cin >> rot;
	if(rot[0]=='L'){
		rot[0]='-';
	}
	if(rot[0]=='R') {
		rot.erase(0,1);
	}
	ch = stoi(rot);


    temp = curr;
    temp = temp + ch%100;
    if (temp >= 100) {
    	temp = temp-100;
    }
    if (temp < 0) {
    	temp = temp+100;
    }
    curr = temp;

    diff = curr-prev; 
    if(diff>0 && ch<0 && curr!=0 && prev!=0) {
    	pass++;
    }
    if(diff<0 && ch>0 && curr!=0 && prev!=0) {
    	pass++;
    }
    if(curr==0) {
    	pass++;
    }
    pass = pass + abs(ch)/100;

    

}

cout << pass;
return 0;
}
 
