//
// Created by Joker on 2020/9/6.
//
#include <iostream>

using namespace std;//命名空间

void printA();//方法声明

//声明和定义必须写到一起，跟kotlin的内联差不多
//限制：
//1.for循环中失效  2.if else过多是取消内联 3.函数体不能太大 4.不能取地址操作
inline void printB(){
    cout << "printB run " << endl;
}

int main() {
    //

    printA();

    printB();//执行到这里的时候相当于 吧 printB() 方法内代码拷贝在这里执行
    return 0;
}

//方法定义
void printA() {
    cout << "printA run " << endl;
};
