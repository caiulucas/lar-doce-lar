#pragma once
#include "../repositories/immobile_repository.hpp"

class ListImmobileUseCase {
private:
  ImmobileRepository &m_immobile_repository;

public:
  ListImmobileUseCase(ImmobileRepository &immobile_repository);
  std::vector<Immobile> execute();
};