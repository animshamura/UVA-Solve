#include<bits/stdc++.h>
#define INF 2147483647
using namespace std;

//Structing Edge 
struct edge{
	int i, j, w;
	edge(){}
	edge( int I, int J, int W ): i(I), j(J), w(W) {}
	bool operator< ( const edge& _ )const{
		return w < _.w;
	}
};

int t, n, m, a, b, wi, ca=0, lead[101];
priority_queue<edge> pq;


// Makeset - assigning self as leader 

void Makeset(){
 memset(lead,-1,sizeof(lead));
}

//Findset - finding cycle 

int Findset(int x){
    if(lead[x]==-1) return x;
	else return Findset(lead[x]);
}

int Kruskals(){
    Makeset();
	wi = INF;
	while(!pq.empty()&&n){
		a = Findset(pq.top().i);
		b = Findset(pq.top().j);
		if(a!=b){
		    lead[a] = b;
			wi = min(wi,pq.top().w);
			n--;
		}
		pq.pop();
	}
	return wi;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		pq = priority_queue<edge>();
		while(m--){
			cin>>a>>b>>wi;
			pq.push(edge(a,b,wi) );
		}
		cout<<"Case #"<<++ca<<": "<<Kruskals()<<endl;
	}
}
