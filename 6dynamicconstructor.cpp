#include<bits/stdc++.h>
using namespace std;
class Saiman{
    char *name;
    int size;
    public:
      Saiman(){
        size=0;
        name= new char[size+1];
      }
      Saiman (const char *s){
        size=strlen(s);
        name= new char[size+1];
        strcpy(name, s);


      }
      void display(){

        cout << name << endl;


      }

      void join(Saiman &a,Saiman &b){
        size=a.size+b.size;
        delete[] name;
        name=new char[size+1];
        strcpy(name, a.name);
        strcat(name, b.name);


      }


};
int main(){
    const char *first="Saiman ";
    Saiman name1(first), name2("amin "), name3("bari "), s1, s2;

    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    return 0;
}