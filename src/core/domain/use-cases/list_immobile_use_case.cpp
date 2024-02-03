#include "list_immobile_use_case.hpp"

ListImmobileUseCase::ListImmobileUseCase(
    ImmobileRepository &immobile_repository)
    : m_immobile_repository(immobile_repository) {}

std::vector<Immobile> ListImmobileUseCase::execute() {
  return m_immobile_repository.list_immobiles();
}