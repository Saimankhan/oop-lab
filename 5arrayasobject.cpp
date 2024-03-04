#include<bits/stdc++.h>
using namespace std;
class Saiman{
    int id;
    string name;
    public:
    void setvalue(){
        cin>>id;
        cin>>name;
    }
    void getvalue(){

        cout<<"id: "<<id<<" name: "<<name<<endl;
    }



};
int main(){
    Saiman player[10];
    for(int i=0;i<10;i){
        player[i].setvalue();
    }
    for(int i=0;i<10;i++){
        player[i].getvalue();
    }
    return 0;
}