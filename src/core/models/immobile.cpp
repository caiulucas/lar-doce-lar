#include "immobile.hpp"

class Immobile; // Add the missing declaration of the Immobile class

Immobile::Immobile(float area, int price_in_cents, int rooms,
                   int parking_spaces, bool is_furnished, bool is_pet_friendly,
                   Address address, User owner)
    : m_area(area), m_price_in_cents(price_in_cents), m_rooms(rooms),
      m_parking_spaces(parking_spaces), m_is_furnished(is_furnished),
      m_is_pet_friendly(is_pet_friendly), m_address(address), m_owner(owner) {}

float Immobile::getArea() { return m_area; }
int Immobile::getPriceInCents() { return m_price_in_cents; }
int Immobile::getRooms() { return m_rooms; }
int Immobile::getParkingSpaces() { return m_parking_spaces; }
bool Immobile::getIsFurnished() { return m_is_furnished; }
bool Immobile::getIsPetFriendly() { return m_is_pet_friendly; }

void Immobile::setArea(float area) { this->m_area = area; }
void Immobile::setPriceInCents(int price_in_cents) {
  this->m_price_in_cents = price_in_cents;
}
void Immobile::setRooms(int rooms) { this->m_rooms = rooms; }
void Immobile::setParkingSpaces(int parking_spaces) {
  this->m_parking_spaces = parking_spaces;
}
void Immobile::setIsFurnished(bool is_furnished) {
  this->m_is_furnished = is_furnished;
}
void Immobile::setIsPetFriendly(bool is_pet_friendly) {
  this->m_is_pet_friendly = is_pet_friendly;
}

Address Immobile::getAddress() { return m_address; }
void Immobile::setAddress(Address address) { this->m_address = address; }

User Immobile::getOwner() { return m_owner; }
void Immobile::setOwner(User owner) { this->m_owner = owner; }