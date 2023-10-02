#include <iostream>
#include <string>
#include <map>

std::string FizzBuzz(int first, int last) {
    std::string output = "";

    // Set out the rules for the FizzBuzz game
    std::map<int, std::string> rules = {
        {3, "Fizz"},
        {5, "Buzz"}
    };

    // Iterate through each number starting with "first" and incrementing up
    for (int current_number = first; current_number <= last; current_number++) {
        std::string current_output = "";

        // Iterate through each rule and check wether the remainder is 0
        for (const auto& rule : rules) {
            if (current_number % rule.first == 0) {
                current_output += rule.second;
            }
        }

        // Check if string is empty, rules do not apply for the current number
        if (current_output.empty()) {

            // Add the current number to the output (convert it to a string)
            current_output += std::to_string(current_number);
        }

        // Add the current_output for the number to the overall output of the function
        output += current_output + ", ";
    }

    // Remove the trailing comma and space
    if (!output.empty()) {
        output.pop_back();  // Remove the last character (comma)
        output.pop_back();  // Remove the space before the comma
    }

    return output;
}

int main() {

    // Call the function specifying the starting number and last number
    std::string FizzBuzz_output = FizzBuzz(100, 200);

    // Output the  result from the function
    std::cout << FizzBuzz_output << std::endl;

    return 0;
}
