#include<bits/stdc++.h>
using namespace std;
int main(){
 

  set<pair<int ,int>>sp;
    vector<pair<int ,int>>vp;
int n;
cin>>n;

for(int i=1; i<=n; i++){
    int a, b;
    cin>>a>>b;
    if(a>b){
        a=a^b;
        b=a^b;
        a=a^b;
    }
    if(sp.find({a, b})==sp.end()){
        sp.insert({a, b});
    }
    else{
        vp.push_back({a, b});
    }
}  
sort(vp.begin(), vp.end());
cout<<vp.size()<<"\n";
for(int i=0; i<vp.size(); i++){
    cout<<vp[i].first<<" "<<vp[i].second<<"\n";
}

    

}