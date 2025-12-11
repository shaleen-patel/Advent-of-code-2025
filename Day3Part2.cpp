#include <bits/stdc++.h>
using namespace std;

int main() {

string str,str1="000000000000";
int j,i,si,l=15,t=200,max,i1;
long long int sum=0,s1i;


while (t--) {
	cin >> str;

	for(j=11;j>=0;j--) {
		max = str[0] - '0';
		i1=0;
		for (i=0;i<str.size()-j;i++) {

			si = str[i] - '0';

			if (si > max) {
				max = si;
				i1=i;
			}
		}
		str1[11-j] = max + '0';
		str.erase(0,i1+1);
	}
   s1i = stoll(str1);
   sum = sum + s1i;

}

cout << sum;

return 0;
}
