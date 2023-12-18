#include <iostream>

// Define the first structure
struct Person {
    std::string name;
    int age;
};


struct Point {
    double x;
    double y;
};

int main() {
    
    Person person1;
    Point point1;

    
    std::cout << "Address of Person structure: " << &person1 << std::endl;
    std::cout << "Address of Point structure: " << &point1 << std::endl;

    return 0;
}
