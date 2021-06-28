
#include <iostream>
#include <string>
std::string encrypt_caesar(std::string string, int codeNumber) {
    int len = string.length();

    for (int i = 0; i < len; i++) {
        if ((int)string[i] >= 97 && (int)string[i] <= 122) {
            if ((int) string[i] + codeNumber > 122) {
                string[i] = 96 + (int) string[i] + codeNumber - 122;
            } else if ((int) string[i] + codeNumber < 97) {
                string[i] = (int) string[i] + 26 + codeNumber;
            } else if ((int) string[i] + codeNumber >= 97 && (int) string[i] + codeNumber <= 122) {
                string[i] = (int) string[i] + codeNumber;
            }
        } else if ((int)string[i] >= 65 && (int)string[i] <= 90) {
            if ((int) string[i] + codeNumber > 90) {
                string[i] = 64 + (int) string[i] + codeNumber - 90;
            } else if ((int) string[i] + codeNumber < 65) {
                string[i] = (int) string[i] + 26 + codeNumber;
            } else if ((int) string[i] + codeNumber >= 65 && (int) string[i] + codeNumber <= 90) {
                string[i] = (int) string[i] + codeNumber;
            } else if (!((int)string[i] >= 65 && (int)string[i] <= 90) && !((int)string[i] >= 97 && (int)string[i] <= 122)){
                string[i] = string[i];
            }
        }
    }
    return string;
}

std::string decrypt_caesar(std::string encrypt_caesar, int codeNumber) {
    return encrypt_caesar;
}

int main() {
    int codeNumber;
    std::cout << "Input code number: ";
    std::cin >> codeNumber;

    std::string str;
    std::cout << "\nInput string: ";
    std::getline(std::cin >> std::ws, str);

    std::cout << encrypt_caesar(str, codeNumber) << "\n";

    std::cout << decrypt_caesar(str, codeNumber) << "\n";

}
