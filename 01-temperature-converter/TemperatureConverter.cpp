#include <iostream>
#include <iomanip>

int main ()
{ 
   double temp;
   char unit;

   std::cout << "******** TEMPERATURE CONVERTER ********" << std::endl;
   std::cout << "F = Fahrenheit to Celsius" << std::endl;
   std::cout << "C = Celsius to Fahrenheit" << std::endl;
   std::cout << "Enter the temperature: ";
   std::cin >> temp;
   std::cout << "Enter the unit (C for Celsius, F for Fahrenheit): ";
   std::cin >> unit;
   
   std::cout << std::fixed << std::setprecision(1);

   if (unit == 'C' || unit == 'c') {
       double fahrenheit = (temp * 9.0 / 5.0) + 32.0;
       std::cout << temp << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
   } else if (unit == 'F' || unit == 'f') {
       double celsius = (temp - 32.0) * 5.0 / 9.0;
       std::cout << temp << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
   } else {
       std::cout << "Invalid unit entered. Please enter C or F." << std::endl;
   }

   std::cout << "****************************************************" << std::endl;
    return 0;
}