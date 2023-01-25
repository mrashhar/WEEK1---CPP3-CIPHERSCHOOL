#include<iostream>
using namespace std;

class student{
    string passcode;

    protected;
    int age;
    // int, char,  string, float..
    public:
    string name;
    int id;

    student(){

    }
    student(int id, string name,string passcode,int age){
        this->name= name;
        this->std::_cxx11::string student::passcode
        this->passcode = passcode;
        this->age= age;
    }
    void into(){
        cout<<"My name is "<<name<<" , my id is "<<id<<"passcode is"<<passcode<<endl;

    }
    void setpass(string s, int a){
        passcode = s;
        age = a;

    }

    friend void hacker(student s);
    //friend class bestfriend;

};

void hacker(student s){
    cout<<s.passcode<<" "<<s.age<<endl;
}

class bestfriend {

    public :
    void sharingsecret(student s){
        cout<<s.passcode<<s.age<<endl;

    }
};

int main(){
   Student s1(1,"mohit","0001",10);
   //int a = 10;
   // int*ptri = &a;
   // student*ptrs = &s1;
   // cout<<ptrs->name<<endl;
   // cout<<(*ptrs). name<<endl;
   // bestfriend bff;
   // hacker(s1);
    
    // s1.passcode = "001";
    return 0;
}