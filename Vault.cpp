#include "Vault.hpp"
#include <stdexcept>

/*
 * Vault Class Implementation
 * --------------------------
 * Implement all Vault member functions here.
 *
 * Your functions should throw the following exceptions where appropriate:
 *   - VaultSecurity::AccessDeniedException  (locked vault access, wrong passcode)
 *   - VaultSecurity::VaultFullException     (adding items when at max capacity)
 *   - std::invalid_argument                 (empty passcode attempts, empty item names, empty new passcodes)
 *   - std::out_of_range                     (invalid index in removeItem)
 *
 * Remember:
 *   - The vault starts LOCKED when constructed
 *   - Use your VaultSecurity namespace exceptions with the full prefix:
 *     VaultSecurity::AccessDeniedException
 */
