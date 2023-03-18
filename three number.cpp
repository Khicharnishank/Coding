#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the value of c"<<endl;
    cin>>c;
    if(a>=b && a>=c){
        cout<<a;
    }
    else if (b>=a && b>=c){
        cout<<b;
    }
    else if (c>=a && c>=b){
        cout<<c;
    }
    else{
        cout<<"all are equal";
    }
    return 0;
}