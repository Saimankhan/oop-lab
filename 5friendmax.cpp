#include <bits/stdc++.h>
using namespace std;

class Saiman2; // Important
class Saiman1{
    int x;
public:
    void input(){
        cin>>x;
    }
    friend int Max(Saiman1 a, Saiman2 b);
};

class Saiman2{
    int y;
public:
    void input(){
        cin>>y;
    }
    friend int Max(Saiman1 a, Saiman2 b);
};

int Max(Saiman1 a, Saiman2 b){
    if(a.x>=b.y) return a.x;
    else return b.y;
}

int main(){
    Saiman1 a;
    Saiman2 b;
    a.input();
    b.input();
    cout<<Max(a,b)<<endl;
    return 0;
}