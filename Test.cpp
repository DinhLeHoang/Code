#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int tamKC=n;
		int tamVT=n-1;
		int dem=0;
		int kc;
		for(int i=0; i<n; i++) {
            for(int j=i+1;j<=n;j++) {
                if( a[i] == a[j])
                {
                    kc=j-i;
                    if (kc<tamKC)
                    {
                        tamKC = kc;
                        tamVT=i;
                    }
                    dem=1;
                }
            }
		}
		if (dem==0) cout<<"-1"<<endl;
		else if (dem == 1) cout<<a[tamVT]<<endl;

}
}
