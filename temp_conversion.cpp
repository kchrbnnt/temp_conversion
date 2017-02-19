#include <iostream>

using namespace std;

float celsius;
float fahrenheit;
float kelvin;

float f_to_c()
{
    celsius = ((fahrenheit - 32) * 5) / 9;
    return 0;
}

float c_to_f()
{
    fahrenheit = (((celsius * 9) / 5) + 32);
    return 0;
}

float k_to_c()
{
    celsius = (kelvin - 273.15);
    return 0;
}

float c_to_k()
{
    kelvin = (celsius + 273.15);
    return 0;
}

float k_to_f()
{
    fahrenheit = ((((kelvin - 273.15)* 9) / 5) + 32);
    return 0;
}

float f_to_k()
{
    kelvin = ((((fahrenheit - 32) * 5) / 9)+273.15);
    return 0;
}

int main()
{
    cout << "Enter a temperature in degrees Fahrenheit to convert to degrees Celsius.";
    cin >> fahrenheit;
    float f_to_c();
    cout << celsius;
    return 0;
}
