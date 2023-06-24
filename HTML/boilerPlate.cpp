 #include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());

    auto start=chrono::high_resolution_clock::now();

    // your code here
    int sum = 0;
    for(int i=0 ; i<500;i++){
    	sum +=10+i;
    }
	cout<<sum;
    
    auto stop=chrono::high_resolution_clock::now();
    auto duration=chrono::duration_cast<chrono::microseconds>(stop-start);
    cerr<<duration.count()/1000.0<<" ms\n";
}

