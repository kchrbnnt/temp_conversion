#include <iostream>

using namespace std;

char unit;
char unit_2;
float temp;
float celsius;
float fahrenheit;
float kelvin;

int f_to_c()
{
    celsius = ((fahrenheit - 32) * 5) / 9;
    return 0;
}

int c_to_f()
{
    fahrenheit = (((celsius * 9) / 5) + 32);
    return 0;
}

int k_to_c()
{
    celsius = (kelvin - 273.15);
    return 0;
}

int c_to_k()
{
    kelvin = (celsius + 273.15);
    return 0;
}

int k_to_f()
{
    fahrenheit = ((((kelvin - 273.15)* 9) / 5) + 32);
    return 0;
}

int f_to_k()
{
    kelvin = ((((fahrenheit - 32) * 5) / 9)+273.15);
    return 0;
}

int main()
{
    cout << "Enter a temperature with units: ";
    cin >> temp;
    cin >> unit;
	
    cout << "What temperature unit would you like to convert to?";
    cin >> unit_2;
    
    if(isupper(unit))  //converts uppercase units to lowercase
	{
		unit = tolower(unit);
	}
    
    if(isupper(unit_2))  //converts uppercase units to lowercase
	{
		unit = tolower(unit_2);
	}	
	
    if(unit == 'f' && unit_2 == 'c')
    {    
        temp = f_to_c;
	cout << temp << "degrees Celsius\n";
    }
    
    if(unit == 'f' && unit_2 == 'k')
    {
        temp = f_to_k;
	cout << temp << "Kelvin\n";
    }
    
    if(unit == 'c'  && unit_2 == 'f')
    {
        temp = c_to_f;
	cout << temp << "degrees Fahrenheit\n";
    }
	
    if(unit == 'c' && unit_2 == 'k')
    {
        temp = c_to_k;
	cout << temp << "Kelvin\n";
    }

    if(unit == 'k' && unit_2 == 'f')
    {
        temp = k_to_f;
	cout << temp << "degrees Fahrenheit\n";
    }
	
    if(unit == 'k' && unit_2 == 'c')
    {
        temp = k_to_c;
	cout << temp << "degrees Celsius\n";
    }
    return 0;
}
