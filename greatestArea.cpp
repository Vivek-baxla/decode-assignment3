# include<iostream>
using namespace std;
int main(){
    float rad;
    cout<<"Enter radius : ";
    cin>>rad;
    float area = 3.14*rad*rad;
    float circumference = 2*3.14*rad;
    if(area>circumference){
        cout<<"Area is larger than circumference";
    }else{
        cout<<"Circumference is larger";
    }
}