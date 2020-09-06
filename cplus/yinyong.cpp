//
// Created by Joker on 2020/9/3.
//

#include <iostream>

using namespace std;//命名空间


int main1() {
    //引用的用法

    int a = 10;
    int &b = a;
    //跟C取地址不是一个东西
    //相当于给a取了一个别名

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    b = 100;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

//    int &c;//报错，必须初始化

    return 0;
}

/**
 * 如果直接（int a,int b） 则不能交换，相当于方法中的a b 是新创建的
 * @param a
 * @param b
 */
void swapxy(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main2() {
    //
    int x = 10;
    int y = 20;

    swapxy(x, y);
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    return 0;
}

struct Teacher {
    int age;
};

void printT1(const Teacher *pt) {
    cout << "age1=" << pt->age << endl;
}
void printT2( Teacher &t) {
    cout << "age2=" << t.age << endl;
    t.age = 33;
}

void printT3( Teacher t) {
    cout << "age3=" << t.age << endl;
    t.age = 32;//这里不会变，参数是copy的
}
int main() {
    //
    Teacher t;

    t.age=36;
    printT1(&t);
    printT2(t);
    printT3(t);
    cout << "age4=" << t.age << endl;

    return 0;
}
