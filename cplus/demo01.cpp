//
// Created by Joker on 2020/8/31.
//

#include <iostream>

using namespace std;//�����ռ�


int main1() {
    //��Բ�����
    double r = 0;
    double s = 0;

    cout << "������Բ�İ뾶";
    cin >> r;
    cout << "�뾶=" << r << endl;
    s = 3.14 * r * r;
    cout << "Բ�����=" << s << endl;
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

    cout << "Բ�����=" << circle.getSs() << endl;

    return 0;
}

int main3() {
    //const�÷�
    const int a = 10;
    int const b = 20;//�����÷�һ��

    const int *c;//����ָ��
    //ָ��ָ����ڴ��ַ���ܸı�,ֵ���Ա�
    c = &a;
    cout << "c�Լ���ַ=" << &c << endl;
    cout << "cָ���ַ=" << c << endl;
    cout << "c=" << *c << endl;
    c = &b;
    cout << "c�Լ���ַ=" << &c << endl;
    cout << "cָ���ַ=" << c << endl;
    cout << "c=" << *c << endl;
//    *c=30; �������޸�ָ����ָ����ڴ�ռ䣨�������Ϊ���Լ��ĵ�ַ��

//    c�Լ���ַ=0x61fe08
//    cָ���ַ=0x61fe18
//    c=10
//    c�Լ���ַ=0x61fe08
//    cָ���ַ=0x61fe14
//    c=20

    cout << "=========================" << endl;
    int d1 = 100;
    int d2 = 200;
    int *const d = &d1;//ָ�볣�� ָ��ָ��ĵط����ܱ䣬���Լ��ĵ�ַҲ���ܱ䣩

    cout << "d�Լ���ַ=" << &d << endl;
    cout << "dָ���ַ=" << d << endl;
    cout << "d=" << *d << endl;
//    *d = &d2;
//    *d=d2;
    *d = 300;
    cout << "d�Լ���ַ=" << &d << endl;
    cout << "dָ���ַ=" << d << endl;
    cout << "d=" << *d << endl;

//    d�Լ���ַ=0x61fdf8
//    dָ���ַ=0x61fe04
//    d=100
//    d�Լ���ַ=0x61fdf8
//    dָ���ַ=0x61fe04
//    d=200

    return 0;
}

# define di 20

int main4() {
    //const �� define����
    //define���ڱ����ڴ���ֻ�Ǽ򵥵��ı��滻
    //const ���ɱ����ڴ����ṩ���ͼ�����������

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

    //&a������c��ȡ��ַ
    //&a=000000000061fe14, &b=000000000061fe14
    //a=19, b=19
    //&a=000000000061fe14, &b=000000000061fe14
    //a=17, b=17

    return 0;
}