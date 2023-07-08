#include "iostream"

using std::cout;

double convertToCelsius(double degree)
{
    return (degree - 32.0) * 0.5556;
}

double convertToFahrenheit(double degree)
{
    return (degree * 1.8 ) + 32.0;
}


int main() {
    cout << "Hello, Write a degree ?! \n Please write 'c' to convert to 'Celsius' & 'f' to convert to 'Fahrenheit' \n";
    
    double userDegree = 0;
    char userConvertType = 'c';
    
    std::cin >> userDegree >> userConvertType;
    
    if (userConvertType == 'f') {
        cout << "Degree " << userDegree << " Celsius to Fahrenheit = " << convertToFahrenheit(userDegree) << "\n";
    } else {
        cout << "Degree " << userDegree << " Fahrenheit to Celsius = " << convertToCelsius(userDegree) << "\n";
    }
}
