#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	vector<int>a;
	int now;
	while(cin >> now){
	
		a.push_back(now);
		
		sort(a.begin(),a.end());
		int n = a.size();
		if(n%2==1) cout << a[n/2] << "\n";
		else cout << (a[n/2-1] + a[n/2])/2 << "\n";
		//for(int b:a) cout << b << ' ';
		//cout << "\n";
		//cout << now << "\n";
	
	}

}