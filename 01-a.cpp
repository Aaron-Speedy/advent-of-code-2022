#include <iostream> 
#include <array>
#include <string>
#include <algorithm>
#include <algorithm>
#define NUM_ELVES 5

int main() {
	std::array<int, NUM_ELVES> elf_calories = {};
	int index = 0; 
	std::string input;
	while(index <= NUM_ELVES) {
		getline(std::cin, input);
		if(input != "") {
			elf_calories[index] += std::stoi(input); continue;
		}
		index++;
	} 
	std::cout << *std::max_element(elf_calories.begin(), elf_calories.end()) << '\n';
}
