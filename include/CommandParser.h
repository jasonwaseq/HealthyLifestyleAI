#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

#include <string>

class CommandParser {
public:
    CommandParser();
    void parseCommand(const std::string& command);
    // Other member functions for command parsing
};

#endif // COMMANDPARSER_H
