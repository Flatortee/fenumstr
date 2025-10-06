#pragma once
#include <string>

namespace fenumstr
{
    template <auto V>
    std::string EnumToString() {
#if defined(__clang__) || defined(__GNUC__)
        std::string_view s = __PRETTY_FUNCTION__;
        auto pos = s.find("V = ") + 4;
        auto end = s.find(']', pos);
        return std::string(s.substr(pos, end - pos));
#elif defined(_MSC_VER)
        std::string_view s = __FUNCSIG__;
        auto pos = s.rfind("::") + 2;
        auto end = s.find('>', pos);
        return std::string(s.substr(pos, end - pos));
#else
        return "???";
#endif
    }
};

