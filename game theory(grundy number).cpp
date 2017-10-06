#include <bits/stdc++.h>
using namespace std;
int grundy_num[20][20];
int mex(set<int> st){
    int ans=0;
    for(set <int> ::iterator it=st.begin();it!=st.end();it++){
        if(*it!=ans){ return ans; }
        ans++;
    }
    return ans;
}
int grundy(int x,int y){
    //cout<<x<<" "<<y<<" *** ";
    if(grundy_num[x][y]!=-1){ return grundy_num[x][y]; }
    set <int> st;
    if(x-1>=1 && y-2>=1){ st.insert(grundy(x-1,y-2)); }
    if(x+1<=15 && y-2>=1){ st.insert(grundy(x+1,y-2)); }
    if(x-2>=1 && y-1>=1){ st.insert(grundy(x-2,y-1)); }
    if(x-2>=1 && y+1<=15){ st.insert(grundy(x-2,y+1)); }
    return grundy_num[x][y]=mex(st);
}
int main() {
    memset(grundy_num,-1,sizeof(grundy_num));
    grundy_num[1][1]=0;
    int t;
    cin>>t;
    while(t--){
        
        int x,y;
        cin>>x>>y;
        //cout<<grundy(x,y)<<" ";
        if(grundy(x,y)==0){ cout<<"Second"<<endl; }
        else{ cout<<"First"<<endl; }
    }
    return 0;
}
