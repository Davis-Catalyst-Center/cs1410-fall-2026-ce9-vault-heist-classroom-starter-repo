#include <iostream>
#include "Vault.hpp"

int main() {

    /* --- Vault Creation & Info ---
     * Create a Vault object and display its info.
     * Test that getVaultInfo() works on a locked vault.
     */


    /* --- Unlock Tests ---
     * Test unlocking with:
     *   - An empty passcode (should throw std::invalid_argument)
     *   - A wrong passcode (should throw VaultSecurity::AccessDeniedException)
     *   - The correct passcode (should succeed)
     * Use try/catch blocks to handle exceptions!
     */


    /* --- Add Item Tests ---
     * Test adding items to the vault:
     *   - Add items successfully when unlocked
     *   - Try adding when locked (should throw AccessDeniedException)
     *   - Try adding an empty item name (should throw std::invalid_argument)
     *   - Try adding when vault is full (should throw VaultFullException)
     */


    /* --- Get Inventory Tests ---
     * Test viewing the inventory:
     *   - View inventory when unlocked
     *   - Try viewing when locked (should throw AccessDeniedException)
     */


    /* --- Remove Item Tests ---
     * Test removing items:
     *   - Remove an item by valid index (should return the item name)
     *   - Try a bad index (should throw std::out_of_range)
     *   - Try removing when locked (should throw AccessDeniedException)
     */


    /* --- Update Passcode Tests ---
     * Test changing the passcode:
     *   - Update passcode when unlocked
     *   - Lock, then unlock with the NEW passcode to verify it changed
     *   - Try updating with an empty string (should throw std::invalid_argument)
     *   - Try updating when locked (should throw AccessDeniedException)
     */


    /* --- Lock Tests ---
     * Test locking the vault:
     *   - Lock the vault and verify with getVaultInfo()
     */


    return 0;
}
