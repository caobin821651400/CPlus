//
// Created by Joker on 2020/9/6.
//
#include <iostream>

using namespace std;//命名空间

//**************************************函数重载
int print1(int a) {
    return a + 1;
}

int print1(int a, int b) {
    return a + b + 1;
}

int main1() {
    //
    int a = print1(1);
    cout << "a= " << a << endl;
    int b = print1(1, 2);
    cout << "b= " << b << endl;
    return 0;
}


//**************************************函数指针

void fun1(int a) {

}

void fun1(char *a) {

}

void fun1(int a, int b) {
    cout << "a= " << a << " b= " << b << endl;
}

typedef void (typedefFun1)(int a, int b);//声明一个函数类型

int main() {
    //
    typedefFun1 *typeFun = NULL;
    typeFun = fun1;
    typeFun(1, 2);//相当于 指针指向这个fun1(int a, int b) 方法

    return 0;
}
