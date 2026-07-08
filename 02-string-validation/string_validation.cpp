#include <iostream>
#include <string>

int main ()
{
  std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

   if (name.empty()) {
    std::cout << "You didn't enter a name." << std::endl;
}
else if (name.length() > 12) {
    std::cout << "Your name is too long." << std::endl;
}
else {
    std::cout << "Hello, " << name << "!" << std::endl;
}

// The empty() function checks if the string is empty (has no characters).
// The length() function returns the number of characters in the string.
//The clear() function can be used to remove all characters from the string, making it empty again. For example, you can use name.clear() to clear the name variable.
//The append() function can be used to add characters to the end of the string. For example, you can use name.append(" Smith") to add " Smith" to the end of the name variable.
//name.insert() can be used to insert characters at a specific position in the string. For example, you can use name.insert(0, "Mr. ") to add "Mr. " at the beginning of the name variable.
   
while (true) {
    std::cout << "Please enter your name (or type 'exit'): ";
    std::getline(std::cin, name);

    if (name == "exit")
        break;

    if (name.empty()) {
        std::cout << "You didn't enter a name.\n";
    }
    else if (name.length() > 12) {
        std::cout << "Your name is too long.\n";
    }
    else {
        std::cout << "Hello, " << name << "!\n";
        std::cout << "Your name is: " << name << "\n";
    }
}   // <-- THIS BRACE IS MISSING

return 0;
}
