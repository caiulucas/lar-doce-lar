#include "address.hpp"
#include "user.hpp"

class Immobile {
private:
  int m_id;
  float m_area;
  int m_price_in_cents;
  int m_rooms;
  int m_parking_spaces;
  bool m_is_furnished;
  bool m_is_pet_friendly;
  Address m_address;
  User m_owner;

public:
  Immobile(int id, float area, int price_in_cents, int rooms,
           int parking_spaces, bool is_furnished, bool is_pet_friendly,
           Address address, User owner);
  int get_id() const;
  float get_area() const;
  int get_price_in_cents() const;
  int get_rooms() const;
  int get_parking_spaces() const;
  bool get_is_furnished() const;
  bool get_is_pet_friendly() const;
  void set_id(int id);
  void set_area(float area);
  void set_price_in_cents(int price_in_cents);
  void set_rooms(int rooms);
  void set_parking_spaces(int parking_spaces);
  void set_is_furnished(bool is_furnished);
  void set_is_pet_friendly(bool is_pet_friendly);
  Address get_address();
  void set_address(Address address);
  User get_owner();
  void set_owner(User owner);
};
