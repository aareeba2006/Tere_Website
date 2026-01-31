#include<iostream>
using namespace std;

class teacher {
    private:
        double salary;
    public:
        string name;
        string subject;
    

   void showsalary(){
    cout<<salary;
   }
     
};

int main(){
    teacher t1;
    t1.name= "Areeba";
    t1.subject="c++";
    t1.showsalary(25000);

    
    
    cout<<t1.name<<"\n"<<t1.subject<<"\n";
}