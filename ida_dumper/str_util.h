#pragma once


template <typename Char, bool CaseSensitive = false>
[[nodiscard]] bool string_equals(const Char* a, const Char* b) {
    while (true) {
        auto c_a = *a;
        auto c_b = *b;

        if constexpr (CaseSensitive) {
            if (c_a >= Char('A') && c_a <= Char('Z'))
                c_a += Char('a') - Char('A');
            if (c_b >= Char('A') && c_b <= Char('Z'))
                c_b += Char('a') - Char('A');
        }

        if (c_a != c_b)
            return false;

        if (c_a == '\0')
            break;

        a++;
        b++;
    }

    return true;
}

template <typename Char>
[[nodiscard]] bool string_equals_non_case_sensitive(const Char* a, const Char* b) {
    return string_equals<Char, true>(a, b);
}