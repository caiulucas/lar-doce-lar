#include "user.hpp"

User::User(int id, std::string name, std::string email, std::string password)
    : id(id), name(name), email(email), password(password) {}

int User::get_id() const { return id; }
std::string User::get_name() const { return name; }
std::string User::get_email() const { return email; }
std::string User::get_password() const { return password; }

void User::set_id(int id) { this->id = id; }
void User::set_name(std::string name) { this->name = name; }
void User::set_email(std::string email) { this->email = email; }
void User::set_password(std::string password) { this->password = password; }
