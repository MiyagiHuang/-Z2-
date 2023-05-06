#include<bits/stdc++.h>
#pragma GCC optmize(2)
#define endl '\n'
using namespace std;
int a,n;
queue<int>q2,q3;
int main(){
	cin>>a>>n;
	q2.push(a*2+1);
	q3.push(a*3+1);
	for(int i=2;i<=n;i++){
		if(q2.front()<q3.front()){
			a=q2.front();
			q2.pop();
		}else if(q3.front()<q2.front()){
			a=q3.front();
			q3.pop();
		}else{
			a=q2.front();
			q2.pop();
			q3.pop();
		}
		q2.push(a*2+1);
		q3.push(a*3+1);
	}cout<<a;
	return 0;
}


Ð¡ºï±à³Ì£¨03602632484473389£©
