//
// Created by Joker on 2020/8/31.
//

#include <iostream>

using namespace std;//命名空间


int main1() {
    //求圆的面积
    double r = 0;
    double s = 0;

    cout << "请输入圆的半径";
    cin >> r;
    cout << "半径=" << r << endl;
    s = 3.14 * r * r;
    cout << "圆的面积=" << s << endl;
    return 0;
}

class MyCircle {
public:
    double s;
    double r;

    double getS() const {
        return s;
    }

    void setS(double s) {
        MyCircle::s = s;
    }

    double getR() const {
        return r;
    }

    void setR(double r) {
        MyCircle::r = r;
    }

    double getSs() {
        return 3.14 * r * r;
    }
};

int main2() {
    MyCircle circle;
    circle.setR(7);

    cout << "圆的面积=" << circle.getSs() << endl;

    return 0;
}

int main3() {
    //const用法
    const int a = 10;
    int const b = 20;//两种用法一样

    const int *c;//常量指针
    //指针指向的内存地址不能改变,值可以变
    c = &a;
    cout << "c自己地址=" << &c << endl;
    cout << "c指向地址=" << c << endl;
    cout << "c=" << *c << endl;
    c = &b;
    cout << "c自己地址=" << &c << endl;
    cout << "c指向地址=" << c << endl;
    cout << "c=" << *c << endl;
//    *c=30; 不允许修改指针所指向的内存空间（可以理解为改自己的地址）

//    c自己地址=0x61fe08
//    c指向地址=0x61fe18
//    c=10
//    c自己地址=0x61fe08
//    c指向地址=0x61fe14
//    c=20

    cout << "=========================" << endl;
    int d1 = 100;
    int d2 = 200;
    int *const d = &d1;//指针常量 指针指向的地方不能变，（自己的地址也不能变）

    cout << "d自己地址=" << &d << endl;
    cout << "d指向地址=" << d << endl;
    cout << "d=" << *d << endl;
//    *d = &d2;
//    *d=d2;
    *d = 300;
    cout << "d自己地址=" << &d << endl;
    cout << "d指向地址=" << d << endl;
    cout << "d=" << *d << endl;

//    d自己地址=0x61fdf8
//    d指向地址=0x61fe04
//    d=100
//    d自己地址=0x61fdf8
//    d指向地址=0x61fe04
//    d=200

    return 0;
}

# define di 20

int main4() {
    //const 和 define区别
    //define是在编译期处理，只是简单的文本替换
    //const 是由编译期处理，提供类型检查和作用域检查

    int a = 10;
    int b = 20;
    int array[a + b];

    return 0;
}

void modifyA(int &a) {
    a = 19;
}

void modifyB(int *const a) {
    *a = 17;
}

int main() {
    //
    int a = 10;
    int &b = a;

    modifyA(a);
    printf("&a=%p, &b=%p\n", &a, &b);
    printf("a=%d, b=%d\n", a, b);

    modifyB(&a);
    printf("&a=%p, &b=%p\n", &a, &b);
    printf("a=%d, b=%d\n", a, b);

    //&a引用像c的取地址
    //&a=000000000061fe14, &b=000000000061fe14
    //a=19, b=19
    //&a=000000000061fe14, &b=000000000061fe14
    //a=17, b=17

    return 0;
}