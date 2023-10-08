#include <iostream>

using namespace std;

class MyClass{
private:
    int x = 0;
public:
    void setvalue(const int value) {x = value;}
    int getvalue() const {return x;}
};


int main(){
    MyClass a;
    a.setvalue(5);
    cout<<a.getvalue()<<endl;
    const MyClass b = a;
    cout<<b.getvalue();
    return 0;
}
