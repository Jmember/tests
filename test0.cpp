// Example program
#include <iostream>
#include <string>

using namespace std;
class A {
    protected:
    int a;
};

class B : public A {
    protected:
    int b;
};

class C: public A {
    protected: 
    int c;
};

bool isC( A *a )
{
    return dynamic_cast<C *>(a) != NULL? true : false;
}

int main()
{
  A a;
  B b;
  C *c2 = new C();
  c2 = (A *) c2;
  A *a2 = new A();
  cout << "isC( c2 )? " << (isC( c2 )? "true" : "false");
}

