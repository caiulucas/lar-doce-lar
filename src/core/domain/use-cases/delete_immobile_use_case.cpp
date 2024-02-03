#include "delete_immobile_use_case.hpp"

DeleteImmobileUseCase::DeleteImmobileUseCase(
    ImmobileRepository &immobile_repository)
    : m_immobile_repository(immobile_repository) {}

void DeleteImmobileUseCase::execute(const Immobile &immobile) {
  m_immobile_repository.delete_immobile(immobile);
}