#include <iostream>
using namespace std;

class A
{
};
class B
{
public:
    operator A( )
    {
        cout << "operator A() ȣ��" << endl;
        return A();
    }
    operator int( )
    {
        cout << "operator int() ȣ��" << endl;
        return 10;
    }
    operator double( )
    {
        cout << "operator double() ȣ��" << endl;
        return 5.5;
    }
};
void main( )
{
    A a;
    int n;
    double d;

    B b;
    a = b; //b.operator A() �Ͻ��� ȣ��
    n = b; //b.operator int() �Ͻ��� ȣ��
    d = b; //b.operator double() �Ͻ��� ȣ��

    cout << endl;
    a = b.operator A(); // ����� ȣ��
    n = b.operator int(); // ����� ȣ��
    d = b.operator double(); // ����� ȣ��
}