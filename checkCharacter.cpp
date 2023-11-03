# include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int ascii=(int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)) cout<<"character";
    else if(ascii>=48 && ascii<=57) cout<<"Digits";
    else cout<<"Special character";
    return 0;
}