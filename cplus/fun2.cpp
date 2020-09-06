//
// Created by Joker on 2020/9/6.
//
#include <iostream>

using namespace std;//命名空间

//默认参数右边不能一会带默认参数一会不带
void printm(int x, int y = 1) {
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}

int main1() {
    //函数的默认参数,跟kotlin的差不多,不能指定传值，不能跳过传值
    printm(10);
    printm(8, 9);


    return 0;
}

//站位参数,只有参数类型 没有参数名
void print2(int a, int b, int) {
    cout << "a= " << a << "  b= " << b << endl;
}

//站位参数,只有参数类型 没有参数名
void print3(int a, int b, int = 10) {
    cout << "a= " << a << "  b= " << b  << endl;
}

int main2() {
    //
    print2(1, 2, 3);

    print3(1, 2, 3);
    return 0;
}
