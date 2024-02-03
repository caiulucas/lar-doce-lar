// #include "in_memory_users_repository.hpp"

// InMemoryUsersRepository::InMemoryUsersRepository() {}

// InMemoryUsersRepository::~InMemoryUsersRepository() {}

// void InMemoryUsersRepository::create_user(const User &user) {
//   m_users.push_back(user);
// }

// void InMemoryUsersRepository::update_user(const User &user) {
//   for (auto &u : m_users) {
//     if (u.get_id() == user.get_id()) {
//       u = user;
//       break;
//     }
//   }
// }

// void InMemoryUsersRepository::delete_user(const User &user) {
//   for (auto it = m_users.begin(); it != m_users.end(); ++it) {
//     if (it->get_id() == user.get_id()) {
//       m_users.erase(it);
//       break;
//     }
//   }
// }

// User InMemoryUsersRepository::get_user_by_id(int id) {
//   for (auto &u : m_users) {
//     if (u.get_id() == id) {
//       return u;
//     }
//   }

//   return User(-1, "", "", "");
// }

// User InMemoryUsersRepository::get_user_by_email(std::string email) {
//   for (auto &u : m_users) {
//     if (u.get_email() == email) {
//       return u;
//     }
//   }

//   return User(-1, "", "", "");
// }

// std::vector<User> InMemoryUsersRepository::get_users() { return m_users; }