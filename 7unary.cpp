#include <bits/stdc++.h>
using namespace std;


class Saiman{
    int x, y;
    public:
    Saiman(int x,int y) {

        this->x = x;
        this->y = y;
    }
    void operator - (){
         x=-x;
       y= -y;


    }



     void display(){


        cout << "X: " << x <<endl;
        cout << "Y: " << y <<endl;
     }




};

int main(){

    Saiman d(3,5);
    
    d.display();
    -d;
    d.display();

   
    return 0;
}