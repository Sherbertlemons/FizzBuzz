#include <iostream>
#include <string>
#include <map>

int main() {
    int highest_number;
    std::cout << "What number am I playing FizzBuzz to?" << std::endl;
    std::cin >> highest_number;
    std::cout<< std::endl;

    std::cout << "Okay great, here goes!" << std::endl;
    std::cout<< std::endl;

    std::map<int, std::string> rules = {
        {3, "Fizz"},
        {5, "Buzz"}
    };

    for (int current_number = 1; current_number <= highest_number; current_number++) {
        std::string output = "";
        for (const auto& rule : rules) {

            if (current_number % rule.first == 0) {
                output += rule.second;
            }
        }
        if (output.empty()) {
            std::cout << current_number << std::endl;
        } else {
            std::cout << output << std::endl;
        }
    }

    return 0;
}
