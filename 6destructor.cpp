#include <bits/stdc++.h>
using namespace std;

class Saiman{
    static int cnt;
public:
    Saiman(){
        cnt++;
        cout<<"Called constructor: "<<cnt<<endl;
    }
    ~Saiman(){
        cout<<"Called distructor: "<<cnt<<endl;
        cnt--;
    }
};

int Saiman::cnt=0;

int main(){
    cout<<"Main start"<<endl;
    Saiman a1;
    {
        cout<<"Block start"<<endl;
        Saiman a2,a3;
        cout<<"Block end"<<endl;
    }
    cout<<"Main end"<<endl;
    return 0;
}