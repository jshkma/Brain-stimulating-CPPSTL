#include <iostream>
#include <algorithm> // for_each() �˰����(����)�� ����ϱ� ���� ���
using namespace std;
/////// Ŭ���̾�Ʈ /////////
void Print1(int n) // ������ �̿��Ͽ� ���Ҹ� ���
{
    cout << n <<' ';
}
void Print2(int n) // �� ���Ҹ� �����Ͽ� ���
{
    cout << n*n <<" ";
}
void Print3(int n) // ���ڿ��� endl�� �̿��Ͽ� ���Ҹ� ���
{
    cout <<"���� : "<< n <<endl;
}
void main( )
{
    int arr[5] = {10,20,30,40,50};
    
    for_each(arr, arr+5, Print1); // Print1() �ݹ� �Լ��� �ּҸ� ����
    cout << endl << endl;
    for_each(arr, arr+5, Print2); // Print2() �ݹ� �Լ��� �ּҸ� ����
    cout << endl << endl;
    for_each(arr, arr+5, Print3); // Print3() �ݹ� �Լ��� �ּҸ� ����
}