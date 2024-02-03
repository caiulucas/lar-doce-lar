#include "address.hpp"

Address::Address(std::string street, std::string city, std::string state,
                 std::string zip)
    : street(street), city(city), state(state), zip(zip) {}

std::string Address::getStreet() { return street; }
std::string Address::getCity() { return city; }
std::string Address::getState() { return state; }
std::string Address::getZip() { return zip; }
