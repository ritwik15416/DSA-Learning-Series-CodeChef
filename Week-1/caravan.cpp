#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	ll n,c;
	cin >> t;
	while(t--){
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;++i){
	        cin >> a[i];
	    }
	    if(n==1){
	        cout << 1 << endl;
	    }else{
	        c = 1;
	    for(int i=1;i<n;++i){
	        if(a[i]>a[i-1]){
	            a[i] = a[i-1];     // Why couldn't we use 'continue' here? It still gives the same answer.
	        }else{
	            c++;
	        }
	    }
	    cout << c << endl;
	}
	}
	return 0;
}
