#include <iostream>

class Circle {
    double r;
public:
    void set_r(double my_r) {
        if(my_r > 0) r = my_r;
        else r = 1;
    }
    void show() {
        std::cout << r << std::endl;
    }
};

void exchange(Circle *a, Circle *b) {
    Circle tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    Circle obj1;
    Circle obj2;
    double a = 0;
    double b = 0;
    std::cout << "Input r for obj1:" << std::endl;
    std::cin >> a;
    std::cout << "Input r for obj2:" << std::endl;
    std::cin >> b;
    obj1.set_r(a);
    obj2.set_r(b);
    exchange(&obj1, &obj2);
    std::cout << "\nResult:" << std::endl;
    obj1.show();
    obj2.show();
}
