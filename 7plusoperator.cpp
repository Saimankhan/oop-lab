#include <bits/stdc++.h>
using namespace std;

class Saiman
{
    int x, y;

public:
Saiman(int a=0, int b=0){
        x=a;
        y=b;
    }

    Saiman operator+( Saiman rhs){
        Saiman d;
        d.x=x+rhs.x;
        d.y=y+rhs.y;
        return d;

    }




     void display(){


        cout << "X: " << x <<endl;
        cout << "Y: " << y <<endl;
     }

};

int main()
{

    Saiman a(2,5);
    Saiman b(2,5);
    Saiman c=a+b;
    
    c.display();

    return 0;
}