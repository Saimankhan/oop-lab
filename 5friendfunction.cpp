#include<bits/stdc++.h>
using namespace std;
class Saiman{
    int a, b;
    public:
    void getvalue(){

        cin >> a>>b;
    }
    friend float avg(Saiman A);



};
float avg(Saiman A){
    float average=(A.a+A.b)/2.0;
    return average;
}



int main(){
    Saiman A;
    A.getvalue();
    cout<<"Average"<<avg(A)<<endl;





    return 0;
}