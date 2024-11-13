// Write a C++ program that defines a Car class with the following characteristics:

// A private member variable speed (int) that stores the speed of the car.
// A public constructor that initializes speed to a default value of 0.
// A public method accelerate that increases the speed by a given value.
// A public method brake that decreases the speed by a given value (but cannot go below 0).
// A public method getSpeed that returns the current speed.

#include <iostream>

class Car {
    public: 
        Car() : speed(0){}

        void accelerate(const int32_t value) {speed += value; };
        void brake(const int32_t value) {
            speed -= value;
            if (speed <= 0) {
                speed = 0;
            }
        };
        const int32_t getSpeed() {return speed;};

    private: 
        int32_t speed;
};

int main() {
    Car my_car;
    std::cout << "initial speed " << my_car.getSpeed() << std::endl;

    my_car.accelerate(1);
    std::cout << "current speed " << my_car.getSpeed() << std::endl;

    my_car.accelerate(3);
    std::cout << "current speed " << my_car.getSpeed() << std::endl;    

    my_car.brake(3);
    std::cout << "current speed " << my_car.getSpeed() << std::endl;

    return 0;
}