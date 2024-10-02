#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <iterator>
#include <algorithm>
#include <sstream>
#include <tuple>

// Class representing a single execution of a Brainfuck program.
class BrainfuckExecution {
public:
  BrainfuckExecution(const std::string &program, const std::string &input)
      : program(program), program_pointer(0), data_pointer(0),
        input(input), input_pointer(0) {}

  bool is_finished() const { return program_pointer >= program.size(); }

  void step() {
    if (is_finished())
      return;

    char command = program[program_pointer];
    if (command == '>') {
      data_pointer++;
    } else if (command == '<') {
      data_pointer--;
    } else if (command == '+') {
      data[data_pointer] = (data[data_pointer] + 1) % 256;
    } else if (command == '-') {
      data[data_pointer] = (data[data_pointer] - 1 + 256) % 256;
    } else if (command == '.') {
      output.push_back(static_cast<char>(data[data_pointer]));
    } else if (command == ',') {
      if (input_pointer >= input.size()) {
        data[data_pointer] = 0;
      } else {
        data[data_pointer] = static_cast<unsigned char>(input[input_pointer++]);
      }
    } else if (command == '[') {
      if (data[data_pointer] == 0) {
        int counter = 0;
        while (program_pointer < program.size()) {
          if (program[program_pointer] == '[')
            counter++;
          else if (program[program_pointer] == ']')
            counter--;
          if (counter == 0)
            break;
          program_pointer++;
        }
      }
    } else if (command == ']') {
      if (data[data_pointer] != 0) {
        int counter = 0;
        while (program_pointer >= 0) {
          if (program[program_pointer] == ']')
            counter++;
          else if (program[program_pointer] == '[')
            counter--;
          if (counter == 0)
            break;
          program_pointer--;
        }
      }
    }
    program_pointer++;
  }

  const std::string &get_output() const { return output; }

private:
  std::string program;
  size_t program_pointer;
  std::unordered_map<int, unsigned char> data;
  int data_pointer;
  std::string input;
  size_t input_pointer;
  std::string output;
};

// Class representing a universal search algorithm.
class UniversalSearch {
public:
  explicit UniversalSearch(const std::string &input)
      : input(input), n(0) {
    executions.emplace_back("", input);
  }

  // Pure virtual function to be implemented by derived classes.
  virtual bool check(const std::string &output) = 0;

  std::tuple<std::string, std::string> search() {
    for (const auto &program : all_brainfuck_programs()) {
      executions.emplace_back(program, input);
      for (int i = 0; i <= n; ++i) {
        if (executions[i].is_finished()) {
          std::cout << "X";
          continue;
        } else {
          std::cout << ".";
        }

        for (int j = 0; j < (1 << (n - i)); ++j) {
          executions[i].step();
        }

        if (executions[i].is_finished()) {
          std::string output = executions[i].get_output();
          if (check(output)) {
            return {output, program};
          }
        }
      }
      std::cout << std::endl;
      n++;
    }
    return {"", ""};
  }

protected:
  std::string input;
  std::vector<BrainfuckExecution> executions;
  int n;

private:
  std::vector<std::string> all_brainfuck_programs() {
    const std::string alphabet = "><+-.,[]";
    int k = 1;
    std::vector<std::string> programs;
    while (true) {
      for (size_t i = 0; i < (1 << (3 * k)); ++i) {
        std::string program;
        for (size_t j = 0; j < k; ++j) {
          program.push_back(alphabet[(i >> (3 * j)) & 7]);
        }
        programs.push_back(program);
      }
      k++;
    }
    return programs;
  }
};

// Derived class to find factors of a given integer.
class UniversalFactorization : public UniversalSearch {
public:
  using UniversalSearch::UniversalSearch;

  bool check(const std::string &output) override {
    std::istringstream iss(output);
    std::string a_str, b_str;
    if (!std::getline(iss, a_str, ',') || !std::getline(iss, b_str)) {
      return false;
    }

    int a, b;
    try {
      a = std::stoi(a_str);
      b = std::stoi(b_str);
    } catch (std::invalid_argument &) {
      return false;
    }

    if (a <= 1 || b <= 1) {
      return false;
    }

    return a * b == std::stoi(input);
  }
};

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " [number-to-factorise]" << std::endl;
    return 1;
  }

  std::string input(argv[1]);
  auto [output, program] = UniversalFactorization(input).search();
  std::cout << std::endl << "Output: " << output << std::endl;
  std::cout << "Program: " << program << std::endl;

  return 0;
}
