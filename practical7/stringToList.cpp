
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    std::string inputString = "This is a sample string";

    // Create a stringstream to split the string
    std::stringstream ss(inputString);
    std::vector<std::string> stringList;

    // Split the string by whitespace and store in the vector
    std::string token;
    while (ss >> token) {
        stringList.push_back(token);
    }

    // Print the elements in the list
    std::cout << "List of words:" << std::endl;
    for (const std::string& word : stringList) {
        std::cout << word << std::endl;
    }

    return 0;
}
