#include<iostream>
#include<string.h>
using namespace std;
class worker
{
    public:
    char wname[20];
    int hr;
    float prate,sal;
    void accept(char wname1[20],int hr1,float prate1=50.0f)
    {
        strcpy(wname,wname1);
        hr=hr1;
        prate=prate1;
    }
    void calc()
    {
        sal=prate*hr;
    }
    void disp()
    {
        cout<<"\n worker name="<<wname;
        cout<<"\n hours="<<hr;
        cout<<"\n pay rate="<<prate;
        cout<<"\n salary="<<sal;
    }
};
int main()
{
    worker ob,ob1;
    ob.accept("aditya",10);
    ob.calc();
    ob.disp();
    ob1.accept("sai",20,100.00f);
    ob1.calc();
    ob1.disp();
}
