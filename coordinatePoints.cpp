# include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x-y coordinates : ";
    cin>>x>>y;
    if(x==0 && y==0) cout<<"The point lies on the origin";
    else if(x==0 && y!=0) cout<<"The point lies on y-axis";
    else if(x!=0 && y==0) cout<<"The point lies on x-axis";
    else cout<<"The point is on the plain";
    return 0;
}