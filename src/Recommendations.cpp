#include "Recommendations.h"
#include <iostream>

Recommendations::Recommendations() {}

std::string Recommendations::generateExerciseRecommendation(double activityLevel) {
    if (activityLevel < 3) {
        return "Try to increase your exercise routine.";
    } else if (activityLevel < 5) {
        return "Great! Keep up the moderate activity.";
    } else {
        return "Excellent! You're doing great with your exercise.";
    }
}

std::string Recommendations::generateDietRecommendation(double bmi) {
    if (bmi < 18.5) {
        return "Consider eating more to reach a healthy weight.";
    } else if (bmi < 25) {
        return "Your weight is in the healthy range. Keep up the good work!";
    } else {
        return "You may want to focus on a balanced diet to manage your weight.";
    }
}
