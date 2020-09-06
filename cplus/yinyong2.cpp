//
// Created by Joker on 2020/9/6.
//

#include <iostream>

using namespace std;//命名空间

//正常
int getA1() {
    int a = 10;
    return a;
}
//异常，这里的a是局部变量 用完就会销毁，而引用必须有实例对应，因此引用可能出错
int &getA2() {
    int a = 20;
    return a;
}

int main1() {
    //
    int a1 = getA1();
    cout << "a1= " << a1 << endl;

    int a2 = getA2();
    cout << "a2= " << a2 << endl;

    return 0;
}

int getG1() {
    static int a=20;
    a++;
    return a;
}
//返回变量本身
int &getG2() {
    static int b=20;
    b++;
    cout << "getG2  b= " << b << endl;
    return b;
}

int main(){
    //

   int g1= getG1();
    cout << "g1= " << g1 << endl;
    getG2()=100;
    getG2();
    return 0;
}
