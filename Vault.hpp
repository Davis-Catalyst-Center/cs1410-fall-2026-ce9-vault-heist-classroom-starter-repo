#pragma once

#include <string>
#include <vector>
#include "VaultSecurity.hpp"

/*
 * !! DO NOT MODIFY THIS FILE !!
 * The auto-grader depends on these exact function signatures.
 */

class Vault {
private:
    std::string name;
    std::string passcode;
    bool locked;
    std::vector<std::string> items;
    int maxCapacity;

public:
    Vault(const std::string& name, const std::string& passcode, int maxCapacity);

    void unlock(const std::string& attempt);
    void lock();
    void addItem(const std::string& item);
    std::string removeItem(int index);
    void updatePasscode(const std::string& newPasscode);
    std::string getInventory() const;
    std::string getVaultInfo() const;
};
