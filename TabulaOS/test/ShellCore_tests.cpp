#include "doctest.h"

#include "ShellCore.hpp"
#include <cstdint>

SCENARIO("User wants to show all built-in commands") {
  GIVEN("User types help") {
    ShellCore shell;
    WHEN("User types help") {
      uint32_t result = shell.ExecuteCommand("help", "");
      THEN("The command returns -1 because its not implemented yet") {
        CHECK(result == -1);
      }
    }
  }
}