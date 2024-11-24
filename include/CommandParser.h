#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

#include <string>

class CommandParser {
public:
    CommandParser();
    void parseCommand(const std::string& command);
    void showHelp();
};

#endif // COMMANDPARSER_H
