#include <iostream>
using namespace std;

int main() {
    int t,x,n;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    int a=n/6;
	    if(n>a*6) cout<<(a+1)*x<<endl;
	    else cout<<a*x<<endl;
	    
	}
	return 0;
}
