#include "immobile.hpp"

class Immobile; // Add the missing declaration of the Immobile class

Immobile::Immobile(int id, float area, int price_in_cents, int rooms,
                   int parking_spaces, bool is_furnished, bool is_pet_friendly,
                   Address address, User owner)
    : m_id(id), m_area(area), m_price_in_cents(price_in_cents), m_rooms(rooms),
      m_parking_spaces(parking_spaces), m_is_furnished(is_furnished),
      m_is_pet_friendly(is_pet_friendly), m_address(address), m_owner(owner) {}

int Immobile::get_id() const { return m_id; }
float Immobile::get_area() const { return m_area; }
int Immobile::get_price_in_cents() const { return m_price_in_cents; }
int Immobile::get_rooms() const { return m_rooms; }
int Immobile::get_parking_spaces() const { return m_parking_spaces; }
bool Immobile::get_is_furnished() const { return m_is_furnished; }
bool Immobile::get_is_pet_friendly() const { return m_is_pet_friendly; }

void Immobile::set_id(int id) { this->m_id = id; }

void Immobile::set_area(float area) { this->m_area = area; }
void Immobile::set_price_in_cents(int price_in_cents) {
  this->m_price_in_cents = price_in_cents;
}
void Immobile::set_rooms(int rooms) { this->m_rooms = rooms; }
void Immobile::set_parking_spaces(int parking_spaces) {
  this->m_parking_spaces = parking_spaces;
}
void Immobile::set_is_furnished(bool is_furnished) {
  this->m_is_furnished = is_furnished;
}
void Immobile::set_is_pet_friendly(bool is_pet_friendly) {
  this->m_is_pet_friendly = is_pet_friendly;
}

Address Immobile::get_address() { return m_address; }
void Immobile::set_address(Address address) { this->m_address = address; }

User Immobile::get_owner() { return m_owner; }
void Immobile::set_owner(User owner) { this->m_owner = owner; }
