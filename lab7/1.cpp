#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i  = 0; i < k; i++){
		int x; cin >> x;
		int l = 0, r = n-1;
		while(l <= r){
			int m = (l + r)/2;
			if(a[m] > x) r = m - 1;
			else if(a[m] < x) l = m + 1;		
			else {
				cout << "YES\n"; break;
			}
		}
	}

}

/*

	Сумма префиксов 
	лист
	
*/