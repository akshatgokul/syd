#include<iostream>

int main(int argc, char* argv[]) {
    std::cout << "syd - a very bad audio player" << std::endl;
    // Check number of arguments
    if(argc != 2) {
        std::cerr << "Usage: syd <input_file>" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::system((std::string("ffplay -vn -nodisp -stats -window_title syd ") + argv[1]).c_str()); 
    
    return EXIT_SUCCESS;
}