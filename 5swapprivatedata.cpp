#include <bits/stdc++.h>
using namespace std;
class Saiman2;
class Saiman1
{
    int x;

public:
    void setvalue()
    {

        cin >> x;
    }
    void getvalue()
    {

        cout << "x: " << x << endl;
    }
    friend void swapvalue( Saiman1 &a, Saiman2 &b);
};

class Saiman2
{
    int y;

public:
    void setvalue()
    {

        cin >> y;
    }
    void getvalue()
    {

        cout << "y: " << y << endl;
    }
     friend void swapvalue( Saiman1 &a, Saiman2 &b);
};
 void swapvalue( Saiman1 &a, Saiman2 &b){
   int temp=a.x;
   a.x=b.y;
   b.y=temp;


 }
int main()
{
    Saiman1 a;
    a.setvalue();
    Saiman2 b;
    b.setvalue();
    cout<<"Before swap";
    a.getvalue();
    b.getvalue();
    swapvalue(a,b);
    cout<<"after  swap";
    a.getvalue();
    b.getvalue();

    return 0;
}