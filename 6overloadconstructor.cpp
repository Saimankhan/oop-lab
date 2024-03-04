#include<bits/stdc++.h>
using namespace std;

class Saiman{
    float x, y;
    public:
      Saiman(){}
      Saiman(float a)
      {
        x=a;
        y=a;
      }
      Saiman(float a, float b){
        x=a;
        y=b;

        
      }
      void display(){

        cout<<x<<" "<<y<<endl;
      }
      friend Saiman sum( Saiman a, Saiman b);



};
 Saiman sum(Saiman a, Saiman b){
   Saiman c;
   c.x=a.x+b.x; c.y=a.y+b.y;
   return c;


 }

int main(){
Saiman A(2.5,2.3),B(3.5);
Saiman C=sum(A,B);
C.display();


    return 0;
}