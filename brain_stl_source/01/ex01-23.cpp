#include <iostream>
using namespace std;

class A
{
};
class B
{
public:
    B( ) { cout << "B() ������" << endl; }
    B(A& _a) { cout << "B(A _a) ������" << endl; }
    B(int n) { cout << "B(int n) ������" << endl; }
    B(double d) { cout << "B(double d) ������" << endl; }
};
void main( )
{
    A a;
    int n = 10;
    double d = 5.5;

    B b;   // B() ������ ȣ��
    b = a; // b = B(a) �Ͻ��� ������ ȣ�� �� ����
    b = n; // b = B(n) �Ͻ��� ������ ȣ�� �� ����
    b = d; // b = B(d) �Ͻ��� ������ ȣ�� �� ����
}