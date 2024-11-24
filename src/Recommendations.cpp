#include "Recommendations.h"
#include <iostream>

Recommendations::Recommendations() {}

std::string Recommendations::generateExerciseRecommendation(double activityLevel) {
    if (activityLevel < 3) {
        return "Try to increase your exercise routine. Aim for 30 minutes a day.";
    } else if (activityLevel < 5) {
        return "Great! Keep up the moderate activity. Maybe add some strength training.";
    } else {
        return "Excellent! You're doing great with your exercise. Maintain consistency!";
    }
}

std::string Recommendations::generateDietRecommendation(double bmi) {
    if (bmi < 18.5) {
        return "Consider eating more to reach a healthy weight. Focus on nutrient-rich foods.";
    } else if (bmi < 25) {
        return "Your weight is in the healthy range. Keep up the good work!";
    } else {
        return "You may want to focus on a balanced diet and track your caloric intake.";
    }
}

std::string Recommendations::generateMotivationalQuote() {
    return "Keep going! Your health is your wealth!";
}
