#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{85, 86, 22, 14, 9};
    assert(score_signal(signal_case_1) == 151);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{92, 94, 14, 12, 4};
    assert(score_signal(signal_case_2) == 184);
    assert(classify_signal(signal_case_2) == "accept");
    Signal signal_case_3{98, 96, 8, 5, 7};
    assert(score_signal(signal_case_3) == 273);
    assert(classify_signal(signal_case_3) == "accept");
}
