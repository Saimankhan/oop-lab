#include <bits/stdc++.h>
using namespace std;
class Saiman
{
    int x, y;

public:
    Saiman(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x: " << x << " "
             << "y: " << y << endl;
    }
    friend Saiman operator+(Saiman ,Saiman);
};
Saiman operator+(Saiman a, Saiman b){
    Saiman C;
    C.x = a.x+b.x;
    C.y = a.y+b.y;
    return C;
}
int main()
{
    Saiman a(2, 5);
    Saiman b(2, 5);
    Saiman c = a + b;

    c.display();

    return 0;
}