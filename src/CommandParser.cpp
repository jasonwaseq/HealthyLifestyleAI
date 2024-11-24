#include "CommandParser.h"
#include <iostream>

CommandParser::CommandParser() {}

void CommandParser::parseCommand(const std::string& command) {
    if (command == "help") {
        showHelp();
    } else {
        std::cout << "Unknown command: " << command << std::endl;
    }
}

void CommandParser::showHelp() {
    std::cout << "Available commands: " << std::endl;
    std::cout << "input health data" << std::endl;
    std::cout << "recommend exercise" << std::endl;
    std::cout << "recommend diet" << std::endl;
    std::cout << "linear regression prediction" << std::endl;
    std::cout << "exit" << std::endl;
}
