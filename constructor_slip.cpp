//sum of two fraction.
#include<iostream>
using namespace std;
class fraction{
    public:
        int n,d;
        fraction(int n,int d)
        {
            this->n=n;
            this->d=d;
        }
        void add(fraction ob,fraction ob1)
        {
            n=ob.n+ob1.n;
            d=ob.d+ob1.d;
            cout<<"addition="<<n<<"/"<<d;
        }
};
int main()
{
    fraction ob(15,66);
    fraction ob1(35,11);
    ob.add(ob,ob1);
}