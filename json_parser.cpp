#include "json_parser.h"
#include "json_value.h"

#include <iostream>
#include <string>
#include <map>

std::map<std::string, JsonObjectValue> from_string(std::string &s) {
    std::cout << s << std::endl;
    JsonObjectValue obj = {3};
    std::map<std::string, JsonObjectValue> finalMap = {};
    return finalMap;
}