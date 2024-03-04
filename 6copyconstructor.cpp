#include <bits/stdc++.h>
using namespace std;

class Saiman {
    int id;
public:
    Saiman(){}
    Saiman(int a){
        id=a;
    }
    Saiman(Saiman &x){
        id=x.id;
    }
    void display(){
        cout<<id;
    }
};

int main(){
    Saiman A(100);
    Saiman B(A);
    Saiman C=A;
    Saiman D;
    D=A;
    cout<<"\nID of A: "; A.display();
    cout<<"\nID of B: "; B.display();
    cout<<"\nID of C: "; C.display();
    cout<<"\nID of D: "; D.display();
    return 0;
}