#include "user.hpp"

User::User(std::string name, std::string email, std::string password)
    : name(name), email(email), password(password) {}

std::string User::getName() { return name; }
std::string User::getEmail() { return email; }
std::string User::getPassword() { return password; }

void User::setName(std::string name) { this->name = name; }
void User::setEmail(std::string email) { this->email = email; }
void User::setPassword(std::string password) { this->password = password; }
