# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter sides of a triangle respectively : ";
    cin>>a>>b>>c;
    if(a==b && b==c) cout<<"Equilateral triangle";
    else if(a==b || b==c || c==a) cout<<"Scalene triangle";
    else if(a!=b!=c) cout<<"Isoscles triangle";
    return 0;
}