#pragma once
#include "../../models/immobile.hpp"
#include <vector>

class ImmobileRepository {
private:
  std::vector<Immobile> m_immobile_list;

public:
  ImmobileRepository();          // Constructor
  virtual ~ImmobileRepository(); // Destructor

  virtual void create_immobile(const Immobile &immobile) = 0;

  virtual void update_immobile(const Immobile &immobile) = 0;

  virtual void delete_immobile(const Immobile &immobile) = 0;

  virtual Immobile get_immobile_by_id(int id) = 0;

  virtual Immobile get_immobile_by_email(std::string email) = 0;

  virtual std::vector<Immobile> list_immobiles() = 0;
};