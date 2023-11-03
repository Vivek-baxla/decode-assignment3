# include<iostream>
using namespace std;
int main(){
    int len,breadth;
    cout<<"Enter length : ";
    cin>>len;
    cout<<"Enter breadth : ";
    cin>>breadth;
    float area = len*breadth;
    float perimeter = 2*(len+breadth);
    if(area>perimeter) cout<<"Area is greater";
    else cout<<"perimeter is greater";
}