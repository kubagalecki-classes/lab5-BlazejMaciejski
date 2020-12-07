#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > isAnimalLover;

    for (Human person : people) {
        person.birthday();

        if (person.isMonster()) {
            isAnimalLover.push_back('n');
        }
        else {
            isAnimalLover.push_back('y');
        }
    }
    std::reverse(isAnimalLover.begin(), isAnimalLover.end());
    // Twoja implementacja tutaj
    return isAnimalLover;
}
