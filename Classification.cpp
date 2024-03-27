#include <iostream>

double calculateCFUPerML(int colonyCount, double dilutionFactor, double plateVolume) {
    return colonyCount / (dilutionFactor * plateVolume);
}

// Function to classify colonies based on CFU/mL count
std::string classifyColony(int cfuPerML) {
    if (cfuPerML == 0) {
        return "No Growth";
    } 
    else if (cfuPerML <= 1000) {
        return "Doubtful";
    } 
    else {
        return "Probable";
    }
}

int main() {
    int colonyCount = 50;
    double dilutionFactor = 10.0;
    double plateVolume = 0.1;

    double cfuPerML = calculateCFUPerML(colonyCount, dilutionFactor, plateVolume);

    std::string classification = classifyColony(cfuPerML);

    std::cout << "CFU/mL: " << cfuPerML << std::endl;
    std::cout << "Classification: " << classification << std::endl;

    return 0;
}
