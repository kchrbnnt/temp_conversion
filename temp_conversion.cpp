#include <iostream>

using namespace std;

char unit;
float temp;
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
    cout << "Enter a temperature with units: ";
    cin >> temp;
    cin >> unit;
    
    if(isupper(unit))
	{
		unit = tolower(unit);
	}
    
    if(unit == 'f')
    {    
        cout << f_to_c "degrees C\n" && f_to_k "Kelvin";
    }
    
    if(unit == 'c')
    {
        cout << c_to_f "degrees F\n" && c_to_k "Kelvin";
    }
    
    if(unit == 'k')
    {
        cout << k_to_f "degrees F\n" && k_to_c "degrees C";
    }
    return 0;
}
