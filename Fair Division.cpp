#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,a;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
       // ll sum=0;
       ll ca=0,cb=0;
        while(n--){
                cin>>a;
               // sum+=a;
                 if(a==1){
            ca++;
        }
          if(a==2){
            cb++;
        }

        }

        if((ca>1 && cb>1) ||(ca%2==0 && cb%2==0)){
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }

    }

    return 0;
}

