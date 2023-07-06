#include "iostream"

double convertToCelsius(double degree)
{
    return (degree - 32.0) * 0.5556;
}

double convertToFahrenheit(double degree)
{
    return (degree * 1.8 ) + 32.0;
}


int main() {
    std::cout << "Hello, Write a degree and 'c' to convert to 'Celsius' & 'f' to convert to 'Fahrenheit' \n";
}
