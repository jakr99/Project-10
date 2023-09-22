#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("story.txt");  
    std::ofstream outputFile("betterstory.txt");  
    
    std::string line;
    while (std::getline(inputFile, line)) {
        if (!line.empty() && line[0] != '#') {
            outputFile << line << std::endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
