#include <iostream>
#include <regex>
bool isValidEmail(const std::string& email) {
    std::regex emailRegex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    return std::regex_match(email, emailRegex);
}
int main() {
    std::string email;
    std::cout << "Enter an email address: ";
    std::cin >> email;
    if (isValidEmail(email)) {
        std::cout << "Email is valid." << std::endl;
    } else {
        std::cout << "Invalid email address." << std::endl;
    }
    return 0;
}
