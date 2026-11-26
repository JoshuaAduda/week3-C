#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
/*
    if(a>b){
        if(b>c){
            cout<<"Path1:a>b>c"<<endl;
        }else{
            if(a>c){
                cout<<"Path2:a>c>b"<<endl;
            }else{
                cout<<"Path3:c>a>b"<<endl;
            }
        }
    }else{
        if(a>c){
            cout<<"Path4: b>a>c"<<endl;
        }else{
            if(b>c){
                cout<<"Path5:b>c>a"<<endl;
            }else{
                cout<<"Path6:c>b>a"<<endl;
            }
        }
    }
*/

if(a>b&&b>c)cout<<"Path1:a>b>c"<<endl;
else if(a>b&&a>c)cout<<"Path2:a>c>b"<<endl;
else if (a>b)cout<<"Path3:c>a>b"<<endl;
else if(a>c)cout<<"Path4: b>a>c"<<endl;
else if (b>c)cout<<"Path5:b>c>a"<<endl;
else cout<<"Path6:c>b>a"<<endl;

    return 0;
}