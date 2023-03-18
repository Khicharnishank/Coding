#include<iostream>

using namespace std;
int main(){
    int a;
    cout <<"enter number a"<<endl;
    cin>>a;
    if(a>10){
        ++a;
        cout<<a;
    }
    else{
        --a;
        cout<<a;
        
    }
    return 0;
}
