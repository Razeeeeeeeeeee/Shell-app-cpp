#include <iostream>
#include <vector>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Uncomment this block to pass the first stage
  while(1){
  std::cout << "$ ";
  
  std::string input;
  std::getline(std::cin, input);

  int end = input.find(" ");
  std::string command = input.substr(0,end);
  std::string arguments = input.substr(end+1);

  if (command.compare("exit")==0){
    return 0;
    break;
  }
  else if (command.compare("echo")==0){
    
      std::cout<<arguments<<std::endl;
  }
  else if (command.compare("type")==0){
      if(arguments.compare("echo") ==0 || arguments.compare("type") ==0 || arguments.compare("exit")==0)
        std::cout<<arguments<<" is a shell builtin"<<std::endl;
      else
        std::cout<<arguments<<": not found"<<std::endl;
  }
  else
    std::cout<< input <<": command not found"<<std::endl;

  }
}
