#include <iostream>
using namespace std;

class Saiman{ 
   int x;
public:
    void input(){
        cout<<"Enter an integer: ";
        cin>>x;
    }
    void output(){
        cout<<"Result: "<<x<<endl;
    }
    void sum(Saiman a, Saiman b){ 
        x=a.x+b.x;
    }
};

int main(){
   Saiman a,b,c;
   a.input();
   b.input();
   c.sum(a,b);
   c.output();
}