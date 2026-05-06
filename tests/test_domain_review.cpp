#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{65, 43, 15, 46};
    assert(domain_review_score(item) == 174);
    assert(domain_review_lane(item) == "ship");
}
