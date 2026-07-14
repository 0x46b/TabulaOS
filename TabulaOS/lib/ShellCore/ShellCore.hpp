#ifndef SHELL_CORE_HPP
#define SHELL_CORE_HPP
#include <cstdint>

class ShellCore{
    public:
        uint32_t ExecuteCommand(const char* command, const char* arguments);
};

#endif