﻿// ex1-3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
    void Print(void) const { cout << x << ',' << y << endl; }
    const Point operator+(const Point& arg)
    {
        cout << "operator+() 함수 호출" << endl;
        Point pt;
        pt.x = this->x + arg.x;
        pt.y = this->y + arg.y;
        return pt;
    }
};

int main()
{
    std::cout << "예제1-3\n";

    Point p1(2, 3), p2(5, 5);
    Point p3;
    p3 = p1 + p2;
    p3.Print();
    p3.operator+(p2);
    p3.Print();
    //p1 * p2;
    //p1 = p2;
    //p1 == p2;
    //p1 += p2;

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
