#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int x=1, ct = 0;
	    while(x<=n){
	        x = x*2;
	        ct++;
	    }
	    int times = (ct - 1)*a;
	    int breaks = (ct - 2)*b;
	    cout<<(times + breaks)<<endl;
	}
	return 0;
}
