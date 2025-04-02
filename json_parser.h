#ifndef UNTITLED_LIBRARY_H
#define UNTITLED_LIBRARY_H

#include <string>
#include <map>

#include "json_value.h"

std::map<std::string, JsonObjectValue> from_string(std::string &s);

#endif //UNTITLED_LIBRARY_H