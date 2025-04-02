//
// Created by Arthur Efremenko on 4/2/2025.
//

#ifndef JSON_VALUE_H
#define JSON_VALUE_H
#include <vector>
#include <string>
#include <typeinfo>

union JsonObjectValue {
    int i;
    std::string s;
    std::pmr::vector<JsonObjectValue> v;
    std::map<std::string, JsonObjectValue> j;
};

#endif //JSON_VALUE_H
