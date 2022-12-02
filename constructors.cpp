#include <iostream>

using namespace std;

class Car {
    public: 
        string Brand;
        string ModelName;
        int Year;
        int HorsePower;
        
    Car(string brand, string modelName, int year, int horsePower){
        Brand = brand;
        ModelName = modelName;
        Year = year;
        HorsePower = horsePower;
    }
    
    Car(string brand, string modelName, int horsePower){
        Brand = brand;
        ModelName = modelName;
        Year = 2010;
        HorsePower = horsePower;
    }
    
    Car(string brand, string modelName){
        Brand = brand;
        ModelName = modelName;
        Year = 2010;
        HorsePower = 110;
    }
};

class TestCar{
    public:
        void printCarDetails(Car test){
            cout << "Car's brand is: " << test.Brand << endl;
            cout << "Car's model is: " << test.ModelName << endl;
            cout << "Date of issue of the car is: " << test.Year << endl;
            cout << "Car's horse power is: " << test.HorsePower << endl;
            cout << endl;
            }
};


int main()
{
    TestCar test;
    
    Car inf1("Mercedes", "C-class sedan", 2015, 140);
    Car inf2("BMW", "The M3", 170);
    Car inf3("Toyota", "GR Supra");
    

    test.printCarDetails(inf1);
    test.printCarDetails(inf2);
    test.printCarDetails(inf3);
    
    return 0;
}
