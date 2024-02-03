#include "create_immobile_use_case.hpp"
#include <stdexcept>

CreateImmobileUseCase::CreateImmobileUseCase(
    ImmobileRepository &immobile_repository)
    : m_immobile_repository(immobile_repository) {}

void CreateImmobileUseCase::execute(const Immobile &immobile) {
  Immobile existing_immobile =
      m_immobile_repository.get_immobile_by_id(immobile.get_id());

  if (existing_immobile.get_id() != -1) {
    throw std::runtime_error("Immobile already exists");
  }

  m_immobile_repository.create_immobile(immobile);
}
