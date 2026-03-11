# 🔐 The Vault Heist
### Unit 9: Safe Zones & Traps — Coding Exercise
**20 Points Total**

---

## 🎯 Objective

Build a **Vault** class that models a high-security vault with a passcode lock, capacity limits, and a security system. You'll practice **custom namespaces**, **custom exception classes** that inherit from `std::exception`, and **standard exceptions** like `std::invalid_argument` and `std::out_of_range`.

---

## 📜 The Story

You've been hired for the ultimate heist — breaking into a high-security vault. The vault has a passcode lock, limited storage compartments, and a security system that throws errors when things go wrong. Your job: write the code that models this vault and its security system. Can you crack the code, dodge the traps, and grab the loot?

---

## 📁 Starter Files

| File | Status | Description |
|------|--------|-------------|
| `Vault.hpp` | ✅ **DO NOT MODIFY** | Class header — locked for auto-grading |
| `VaultSecurity.hpp` | 📝 **Fill in** | Define namespace and custom exception classes |
| `Vault.cpp` | ✏️ **Write from scratch** | Implement all Vault member functions |
| `main.cpp` | ✏️ **Write from scratch** | Test all functions with try/catch |

---

## ⚠️ Requirements

- You **MUST** define a `VaultSecurity` namespace with two custom exception classes
- Custom exceptions **MUST** inherit from `std::exception` and override `what()`
- You **MUST** use `try/catch` blocks in `main()` to handle all exceptions
- You **MUST** throw both custom AND standard exceptions where appropriate
- Do **NOT** modify `Vault.hpp` — the auto-grader depends on it!

---

## Part 1: VaultSecurity Namespace

In `VaultSecurity.hpp`, define a namespace called **VaultSecurity** containing two custom exception classes:

### AccessDeniedException
- Inherits from `std::exception`
- Private `std::string message` member
- Constructor takes a `const std::string&` and stores it
- Overrides `what()` to return the message (use `.c_str()`)
- `what()` needs the `noexcept` keyword

### VaultFullException
- Same structure as AccessDeniedException
- Used when the vault has no room for more items

---

## Part 2: Vault Class Implementation

In `Vault.cpp`, implement all member functions declared in `Vault.hpp`. The vault starts **LOCKED** when constructed.

| Function | Description |
|----------|-------------|
| `Vault(name, passcode, maxCapacity)` | Constructor — use initialization list. Vault starts locked. |
| `void unlock(attempt)` | Throws `std::invalid_argument` if empty. Throws `AccessDeniedException` if wrong. Unlocks if correct. |
| `void lock()` | Locks the vault. |
| `void addItem(item)` | Throws `AccessDeniedException` if locked. Throws `std::invalid_argument` if empty name. Throws `VaultFullException` if full. |
| `string removeItem(index)` | Throws `AccessDeniedException` if locked. Throws `std::out_of_range` if bad index. Returns removed item. |
| `void updatePasscode(newPasscode)` | Throws `AccessDeniedException` if locked. Throws `std::invalid_argument` if empty. Updates passcode. |
| `string getInventory()` | Throws `AccessDeniedException` if locked. Returns string listing all items. |
| `string getVaultInfo()` | Always works. Returns vault name and locked/unlocked status. |

---

## Part 3: Testing in main()

Test **every function** and demonstrate that your exceptions work. Use `try/catch` blocks to handle each exception type. The starter file has section headers to guide you.

**Every exception type should be triggered and caught at least once!**

---

## Exception Quick Reference

| Exception | Type | When It's Thrown |
|-----------|------|-----------------|
| `AccessDeniedException` | Custom | Wrong passcode, accessing locked vault |
| `VaultFullException` | Custom | Adding item when vault is at max capacity |
| `std::invalid_argument` | Standard | Empty passcode, empty item name, empty new passcode |
| `std::out_of_range` | Standard | Invalid index in removeItem |

---

## 📊 Grading Rubric (20 Points)

### Auto-Graded (14 points)
| Criteria | Points |
|----------|--------|
| Constructor & getVaultInfo | 2 |
| Unlock & Lock | 3 |
| Add Item | 3 |
| Remove Item | 2 |
| Get Inventory | 2 |
| Update Passcode | 2 |

### Manual Review (6 points)
| Criteria | Points |
|----------|--------|
| Code Style & Documentation | 2 |
| Testing in main | 2 |
| Namespace & Exception Structure (proper namespace, inherits std::exception, what() with noexcept) | 2 |

---

## 📤 Submission

Submit the URL for your GitHub Classroom Repository for this assignment **AFTER** committing all changes.
