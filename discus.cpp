#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
int highest=max(a,b);
int high= max(highest,c);
cout<<high<<endl;
}

return 0;
}