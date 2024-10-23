#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)

#define srt(v) sort(v.begin(),v.end())
using namespace std;

int main(){
int n;
    cin >> n;
   vector<int>v(n);
   fr(i,n){
    cin>>v[i];
   }
   
   vector<int>w=v;
   
   srt(v);
   if(v==w){
    cout<<"yes"<<endl;
   cout<<"1"<<" "<<"1";
   }else{
   int count=0;
   vector<int>x;
   fr(i,n){
    if(w[i]!=v[i]){
       ++count;
       x.push_back(i);
    }
    if(count>=3){
        break;
    }
   }
   if(count==0){
   cout<<"yes"<<endl;
   cout<<x[0]+1<<" "<<x[1]+1;
   }
   else if(count==2){
    cout<<"yes"<<endl;
   cout<<x[0]+1<<" "<<x[1]+1;
   }else{
    cout<<"no"<<endl;
   
   }
   }
 return 0;
}