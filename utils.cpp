//
// Created by efremar on 4/2/2025.
//

#include "utils.h"

template <typename T>
bool Utils::contains(std::vector<T> vector, T element) {
    auto found = std::find(vector.begin(), vector.end(), element);
    return found != vector.end();
}