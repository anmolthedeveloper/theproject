#include <iostream>

using namespace std;

class factorial{
private:
    int f, inp;
public:
    void input();
    void calc();
    void output();
};

void factorial::input(){
    cout<<"Enter a number to get it's factorial : ";
    cin>>inp;
}

void factorial::calc(){
    f=1;
    for(int i=inp;i>0;i--)
        f*=i;
}

void factorial::output(){
    cout<<endl<<"Fact of. "<<inp<<" is "<<f;
}

int main()
{
    factorial f;
    f.input();
    f.calc();
    f.output();
    return 0;
}
