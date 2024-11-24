#include <iostream>
#include "CommandParser.h"
#include "LinearRegression.h"
#include "Recommendations.h"

int main() {
    std::cout << "Welcome to the Healthy Lifestyle AI System!" << std::endl;

    CommandParser parser;
    LinearRegression regressor;
    Recommendations recommender;

    // Example: Parse user input and provide recommendations
    std::string command;
    while (true) {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);

        if (command == "exit") {
            break;
        }

        parser.parseCommand(command);

        // Example of using the other classes
        std::vector<double> x = {1, 2, 3};
        std::vector<double> y = {2, 3, 4};
        regressor.fit(x, y);
        double prediction = regressor.predict(5);
        std::cout << "Predicted value: " << prediction << std::endl;

        double bmi = 22.5; // Example BMI
        std::cout << recommender.generateExerciseRecommendation(5) << std::endl;
        std::cout << recommender.generateDietRecommendation(bmi) << std::endl;
    }

    return 0;
}
