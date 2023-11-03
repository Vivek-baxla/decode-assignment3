# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three marks respectively : ";
    cin>>a>>b>>c;
    if(a<=b && a<=c) cout<<"A has scored least marks";
    else if(b<=a && b<=c) cout<<"B has scored least marks";
    else cout<<"C has scored least marks";
    return 0;
}