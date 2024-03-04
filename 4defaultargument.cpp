#include <bits/stdc++.h>
using namespace std;

void print_line(char ch='*', int len=40);
float volume(float r, float h, float pi=3.1416);
void print_line(char ch ,int len){

    while(len--){

        cout << ch ;

    }
    cout << endl;
}
float volume(float r, float h, float pi){
float v=pi*r*r*h;
return v;

}
int main(){
    float r=5, h=10;
    print_line();
   
    cout<<"Volume :"<<volume(r,h)<<endl;
     print_line('-');
    return 0;

}