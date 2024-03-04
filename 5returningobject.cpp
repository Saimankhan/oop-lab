#include <bits/stdc++.h>
using namespace std;

class Saiman{
    float x;
    float y;
public:
    void input(){
        cout<<"Real part: ";
        cin>>x;
        cout<<"Imaginary part: ";
        cin>>y;
    }
    void output(){
        cout<<x<<" + i"<<y<<endl;
    }
    friend Saiman sum(Saiman a, Saiman b);
};

Saiman sum(Saiman a, Saiman b){
    Saiman c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}

int main(){
    Saiman A,B,C;
    A.input();
    B.input();

    C=sum(A,B);

    cout<<"A = ";
    A.output();
    cout<<"B = ";
    B.output();
    cout<<"C = ";
    C.output();
}