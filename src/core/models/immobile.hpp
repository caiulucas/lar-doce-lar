#include "address.hpp"
#include "user.hpp"

class Immobile {
private:
  float m_area;
  int m_price_in_cents;
  int m_rooms;
  int m_parking_spaces;
  bool m_is_furnished;
  bool m_is_pet_friendly;
  Address m_address;
  User m_owner;

public:
  Immobile(float area, int price_in_cents, int rooms, int parking_spaces,
           bool is_furnished, bool is_pet_friendly, Address address,
           User owner);
  float getArea();
  int getPriceInCents();
  int getRooms();
  int getParkingSpaces();
  bool getIsFurnished();
  bool getIsPetFriendly();
  void setArea(float area);
  void setPriceInCents(int price_in_cents);
  void setRooms(int rooms);
  void setParkingSpaces(int parking_spaces);
  void setIsFurnished(bool is_furnished);
  void setIsPetFriendly(bool is_pet_friendly);
  Address getAddress();
  void setAddress(Address address);
  User getOwner();
  void setOwner(User owner);
};
