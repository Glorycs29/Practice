#include <bits/stdc++.h>
using namespace std;
int main(){
	int ts; 
	cin>>ts;
	while(ts--){
		int n,k; cin>>n>>k;
		map<int,int> mp;
		//set<int> s1, s2;

		for(int i=0; i<n;i++){
			int x; cin>>x;
			mp[x]++;
		}
		int x = 0, y = 0;
    for(auto i : mp) {
        if(i.second == 1) {
            x = x + 1;
        } else {
            y = y + 1;
        }
    }

    if((x + y) > 2 * k or (x + y) < k) {
        cout << "NO" << endl;
    }else if(y >= ((2 * k) - x - y)) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
	}
	return 0;
}
