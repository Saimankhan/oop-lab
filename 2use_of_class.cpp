#include<bits/stdc++.h>
using namespace std;
class student{
    int id;
    string name;
    public:
    void set_name(){
        cout<<"ENter name: "<<endl;
        getline(cin, name);
        cout<<"Enter id"<<endl;
        cin>>id;
    }
    void get_name(){
         cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
       



    }



};



int main(){

    student st;
    st.set_name();
    st.get_name();





    return 0;
}