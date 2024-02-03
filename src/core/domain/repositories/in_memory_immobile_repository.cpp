#include "in_memory_immobile_repository.hpp"
#include <stdexcept>

InMemoryImmobileRepository::InMemoryImmobileRepository() {}

InMemoryImmobileRepository::~InMemoryImmobileRepository() {}

void InMemoryImmobileRepository::create_immobile(const Immobile &immobile) {
  m_immobile_list.push_back(immobile);
}

void InMemoryImmobileRepository::update_immobile(const Immobile &immobile) {
  for (auto &i : m_immobile_list) {
    if (i.get_id() == immobile.get_id()) {
      i = immobile;
      break;
    }
  }
}

void InMemoryImmobileRepository::delete_immobile(const Immobile &immobile) {
  for (auto it = m_immobile_list.begin(); it != m_immobile_list.end(); ++it) {
    if (it->get_id() == immobile.get_id()) {
      m_immobile_list.erase(it);
      break;
    }
  }
}

Immobile InMemoryImmobileRepository::get_immobile_by_id(int id) {
  for (auto &i : m_immobile_list) {
    if (i.get_id() == id) {
      return i;
    }
  }
  throw std::invalid_argument("Immobile not found");
}

Immobile InMemoryImmobileRepository::get_immobile_by_email(std::string email) {
  for (auto &i : m_immobile_list) {
    if (i.get_owner().get_email() == email) {
      return i;
    }
  }
  throw std::invalid_argument("Immobile not found");
}

std::vector<Immobile> InMemoryImmobileRepository::list_immobiles() {
  return m_immobile_list;
}