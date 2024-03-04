#include <bits/stdc++.h>
using namespace std;

class Saiman {
    int p_amount,year;
    float rate,r_value;
public:
   int p_amount;
    Saiman(){}
    Saiman(int p,int y,float r=0.12){
        p_amount=p;
        year=y;
        rate=r;
        r_value=p_amount;
        for(int i=0;i<y;i++){
            r_value*=(1.0+r);
        }
    }
    Saiman(int p,int y,int r){
        p_amount=p;
        year=y;
        rate=r;
        r_value=p_amount;
        for(int i=0;i<y;i++){
            r_value*=(1.0+float(r)/100);
        }
    }
    void display(){
        cout<<endl;
        cout<<"Principal amount = "<<p_amount<<endl;
        cout<<"Return value = "<<r_value<<endl;
    }
};

int main(){
    Saiman a,b,c;
    int p,y,R;
    float r;

    cout<<"Enter amount, time, interest (in percent): "<<endl;
    cin>>p>>y>>R;
    a=Saiman(p,y,R);
    
    cout<<"Enter amount, time, interest (decimal form): "<<endl;
    cin>>p>>y>>r;
    b=Saiman(p,y,r);
    
    cout<<"Enter amount, time: "<<endl;
    cin>>p>>y;
    c=Saiman(p,y);

    cout<<"\nDeposit 1\n";
    a.display();

    cout<<"\nDeposit 2\n";
    b.display();

    cout<<"\nDeposit 3\n";
    c.display();
    return 0;
}