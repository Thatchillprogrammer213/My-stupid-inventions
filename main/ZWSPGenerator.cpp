#include <iostream>
#include <string>
#include <fstream>
const std::string ZWSP("​");
int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: ZWSPGenerator <ZWSPCount> <outputFile> or ZWSPGenerator <ZWSPCount> (Note: This one will generate to a file called a.out.txt)" << std::endl;
    } else if (argc == 2) {
        std::ofstream file("a.out.txt", std::ios::out | std::ios::app);
        int i = std::stoi(argv[1]);
        while (i) {
            file << ZWSP;
            --i;
        }
    } else if (argc == 3) {
        std::ofstream file(argv[2], std::ios::out | std::ios::app);
        int i = std::stoi(argv[1]);
        while(i) {
            file << ZWSP;
            --i;
        }
    }
    return 0;
}
