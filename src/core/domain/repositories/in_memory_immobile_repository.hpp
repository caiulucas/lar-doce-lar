#pragma once
#include "immobile_repository.hpp"
#include <vector>

class InMemoryImmobileRepository : public ImmobileRepository {
private:
  std::vector<Immobile> m_immobile_list;

public:
  InMemoryImmobileRepository();  // Constructor
  ~InMemoryImmobileRepository(); // Destructor

  void create_immobile(const Immobile &immobile) override;

  void update_immobile(const Immobile &immobile) override;

  void delete_immobile(const Immobile &immobile) override;

  Immobile get_immobile_by_id(int id) override;

  Immobile get_immobile_by_email(std::string email) override;

  std::vector<Immobile> list_immobiles() override;
};