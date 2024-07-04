
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y,w;
    cin>>w>>y;
    if(w%y==0){
            int r=w/y;
        cout<<"1"<<"/"<<r<<endl;
    }
    else{
         cout<<y<<"/"<<w<<endl;
    }

    return 0;
}

