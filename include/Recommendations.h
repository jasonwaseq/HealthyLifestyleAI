#ifndef RECOMMENDATIONS_H
#define RECOMMENDATIONS_H

#include <string>

class Recommendations {
public:
    Recommendations();
    std::string generateExerciseRecommendation(double activityLevel);
    std::string generateDietRecommendation(double bmi);
    std::string generateMotivationalQuote();
};

#endif // RECOMMENDATIONS_H
