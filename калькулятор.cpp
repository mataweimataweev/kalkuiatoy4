#include <iostream>
#include <Windows.h>


double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}


double calculateRingArea(double innerRadius, double outerRadius) {
    
    double innerArea = calculateCircleArea(innerRadius);
    double outerArea = calculateCircleArea(outerRadius);

    
    double ringArea = outerArea - innerArea;
    return ringArea;
}

int main() {
    setlocale(LC_ALL, "Rus");
    double innerRadius, outerRadius;

    std::cout << "Введите внутренний радиус: ";
    std::cin >> innerRadius;

    std::cout << "Введите внешний радиус: ";
    std::cin >> outerRadius;

   
    double ringArea = calculateRingArea(innerRadius, outerRadius);

    std::cout << "Площадь кольца: " << ringArea << std::endl;

    return 0;
}
