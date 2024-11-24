#include <iostream>
#include <string>
#include "CommandParser.h"
#include "LinearRegression.h"
#include "Recommendations.h"

void showMenu() {
    std::cout << "Welcome to the Healthy Lifestyle AI System!" << std::endl;
    std::cout << "Available commands:" << std::endl;
    std::cout << "1. input health data - Input your health data for analysis." << std::endl;
    std::cout << "2. recommend exercise - Get exercise recommendations based on activity level." << std::endl;
    std::cout << "3. recommend diet - Get diet recommendations based on BMI." << std::endl;
    std::cout << "4. linear regression prediction - Perform linear regression to predict future data." << std::endl;
    std::cout << "5. exit - Exit the program." << std::endl;
}

int main() {
    CommandParser parser;
    LinearRegression regressor;
    Recommendations recommender;

    std::string command;
    double activityLevel = 0;
    double bmi = 0;
    bool isHealthDataEntered = false;

    while (true) {
        showMenu();
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);

        if (command == "exit") {
            std::cout << "Goodbye!" << std::endl;
            break;
        } else if (command == "input health data") {
            std::cout << "Enter your BMI: ";
            std::cin >> bmi;
            std::cout << "Enter your activity level (1-10): ";
            std::cin >> activityLevel;
            isHealthDataEntered = true;
            std::cin.ignore(); // To clear the newline character after input
            std::cout << "Health data recorded!" << std::endl;
        } else if (command == "recommend exercise") {
            if (isHealthDataEntered) {
                std::cout << recommender.generateExerciseRecommendation(activityLevel) << std::endl;
            } else {
                std::cout << "Please input health data first." << std::endl;
            }
        } else if (command == "recommend diet") {
            if (isHealthDataEntered) {
                std::cout << recommender.generateDietRecommendation(bmi) << std::endl;
            } else {
                std::cout << "Please input health data first." << std::endl;
            }
        } else if (command == "linear regression prediction") {
            std::vector<double> x = {1, 2, 3, 4, 5};
            std::vector<double> y = {2, 3, 4, 5, 6};  // Example data
            regressor.fit(x, y);
            double prediction = regressor.predict(6);
            std::cout << "Predicted value for x=6: " << prediction << std::endl;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
