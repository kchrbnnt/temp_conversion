#include <iostream>

using namespace std;

char unit;
char unit_2;
float temp;

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
		unit_2 = tolower(unit_2);
	}	
	
    if(unit == 'f' && unit_2 == 'c')
    {    
        temp = ((temp - 32) * 5) / 9;
	cout << temp << " degrees Celsius\n";
    }
    
    if(unit == 'f' && unit_2 == 'k')
    {
        temp = ((((temp - 32) * 5) / 9)+273.15);
	cout << temp << " Kelvin\n";
    }
    
    if(unit == 'c'  && unit_2 == 'f')
    {
        temp = (((temp * 9) / 5) + 32);
	cout << temp << " degrees Fahrenheit\n";
    }
	
    if(unit == 'c' && unit_2 == 'k')
    {
        temp = (temp + 273.15);
	cout << temp << " Kelvin\n";
    }

    if(unit == 'k' && unit_2 == 'f')
    {
        temp = ((((temp - 273.15)* 9) / 5) + 32);
	cout << temp << " degrees Fahrenheit\n";
    }
	
    if(unit == 'k' && unit_2 == 'c')
    {
        temp = (temp - 273.15);
	cout << temp << " degrees Celsius\n";
    }
    return 0;
}
