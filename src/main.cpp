#include <iostream>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Uncomment this block to pass the first stage
  while(1){
  std::cout << "$ ";
  
  std::string input;
  std::getline(std::cin, input);
  if (input.compare("exit 0")==0){
    return 0;
    break;
  }

  std::cout<< input <<": command not found"<<std::endl;

  }
}
