#include <iostream>

using namespace std;

class Circle {
    public: 
        int radius;
        Circle();
        Circle(int r);
        double getArea();
};

Circle::Circle() : Circle(1) { // 11버전까지만 위임 생성자 허용
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름이 " << radius << "인 원 생성" << endl;
}

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    double area = donut.getArea();
    cout << "donut의 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza의 면적은 " << area << endl;
    
}