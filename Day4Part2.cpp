#include <bits/stdc++.h>
using namespace std;

int main() {
  
int i,j,cnt=0,case_count=-1,total_count=0; int l=135,b=135;
string row;
int room[b+2][l+2];


for(i=1;i<b+1;i++) {
	cin >> row;
	for(j=1;j<l+1;j++) {
			room[i][j] = row[j-1];
	}
}


for(i=0;i<b+2;i++) {
	room[i][0] = '.';
	room[i][l+1] = '.';
}
for(j=0;j<l+2;j++) {
	room[0][j] = '.';
	room[b+1][j] = '.';
}


while(case_count!=0) {
case_count = 0;

for(i=0;i<b+2;i++) {
	for(j=0;j<l+2;j++) {
		if(room[i][j]==64 || room[i][j]==10) {

			for(int p=i-1;p<=i+1;p++) {
				for(int q=j-1;q<=j+1;q++) {

					if(room[p][q]==64 || room[p][q]==10) {
						cnt++;
					}
				}
			}
			if (cnt-1<4) {
				case_count++;
				room[i][j]=10;
			}
			cnt=0;
		}
	}
}

total_count = total_count + case_count;

for(i=0;i<b+2;i++) {
	for(j=0;j<l+2;j++) {
		if(room[i][j]==10) {

			room[i][j]=46;

		}
	}
}

}

cout << total_count;

return 0;
}
