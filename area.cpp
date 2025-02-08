#include <iostream>

void area(double radius) {
    if (radius <= 0) {
        std::cout << "Invalid Parameter" << std::endl;
        return;
    }
    
    std::cout << "Area of circle " << (3.14 * (radius * radius)) << std::endl;
}

void area(double width, double height, char type) {
    if (width <= 0 || height <= 0) {
        std::cout << "Invalid Parameter" << std::endl;
        return;
    }
    
    std::cout << "Area of rectangle " << (width * height) << std::endl;
}

void area(double base, double height) {
    if (base <= 0 || height <= 0) {
        std::cout << "Invalid Parameter" << std::endl;
        return;
    }
    
    std::cout << "Area of triangle " << ((base * height) / 2) << std::endl;
}

void area(int side) {
    if (side <= 0) {
        std::cout << "Invalid Parameter" << std::endl;
        return;
    }
    
    std::cout << "Area of square " << (side * side) << std::endl;
}

int main() {
    int choose = 0;
    int term = 5;
    double width, height;
    
    while (choose != term) {
        std::cout << "1) Circle" << std::endl;
        std::cout << "2) Rectangle" << std::endl;
        std::cout << "3) Triangle" << std::endl;
        std::cout << "4) Square" << std::endl;
        std::cout << "5) Exit" << std::endl;
        std::cin >> choose;
        
        if (choose == 1) {
            double radius;
            std::cout << "Input radius: ";
            std::cin >> radius;
            area(radius);
        } else if (choose == 2) {
            std::cout << "Input width: ";
            std::cin >> width;
            std::cout << "Input height: ";
            std::cin >> height;
            area(width, height, 'r');
        } else if (choose == 3) {
            std::cout << "Input width: ";
            std::cin >> width;
            std::cout << "Input height: ";
            std::cin >> height;
            area(width, height);
        } else if (choose == 4) {
            int side;
            std::cout << "Input side: ";
            std::cin >> side;
            area(side);
        }
    }

    return 0;
}