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
    student s1;
    s1.setpass("0001", 10);

    bestfriend bff;
   // bff.sharingsecret(s1);
   hacker(s1);

    
    // s1.passcode = "001";
    return 0;
}