#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point(int _x =0 , int _y =0 ):x(_x),y(_y) { }
    void Print( ) const { cout << x <<',' << y << endl; }
};
class PointPtr
{
    Point *ptr;
public:
    PointPtr(Point *p):ptr(p) { }
    ~PointPtr( )
    {
        delete ptr;
    }
    Point* operator->()const
    {
        return ptr;
    }
};
void main()
{
    PointPtr p1 = new Point(2,3) //�޸� �Ҵ�
    PointPtr p2 = new Point(5,5); //�޸� �Ҵ�

    p1->Print(); //p1.operator->()->Print() ȣ�� (���� ���)
    p2->Print(); //p2.operator->()->Print() ȣ�� (���� ���)
    //p1�� �Ҹ��ڿ��� Point ���� ��ü�� �ڵ� �޸� �����մϴ�.
    //p2�� �Ҹ��ڿ��� Point ���� ��ü�� �ڵ� �޸� �����մϴ�.
}