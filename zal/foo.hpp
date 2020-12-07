#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    int                 i = 0;
    std::vector< char > isAnimalLover;

    for (Human person : people) {
        person.birthday();

        if (person.isMonster()) {
            isAnimalLover[i] = 'y';
        }
        else {
            isAnimalLover[i] = 'n';
        }
        i++;
    }
    std::reverse(isAnimalLover.begin(), isAnimalLover.end());
    // Twoja implementacja tutaj
    return {};
}
