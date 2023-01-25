#include<iostream>
using namespace std;

int main(){
     int a = 10;
     int*p1 = &a;
     int**p2 = &1;
     int***p3 = &2;

     cout<<a<<endl;
     cout<<*p1<<endl;

     ***p3 = 50;
     cout<<**p2<<endl;
     cout<<***p3<<endl;

    // cout<<***p3<<endl;
    return 0;
}