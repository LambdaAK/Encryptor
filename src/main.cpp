#include <iostream>
#include <stdlib.h>

class CaesarCipher {
    public: 
      static std::string encrypt(std::string text, int shift) {
        std::string result = "";
        // only encode letters
        for (int i = 0; i < text.length(); i++) {
          if (isalpha(text[i])) {
            if (isupper(text[i])) {
              result += char(int(text[i] + shift - 65) % 26 + 65);
            } else {
              result += char(int(text[i] + shift - 97) % 26 + 97);
            }
          } else {
            result += text[i];
          }
        }
        return result;
      }

      static std::string decrypt(std::string text, int shift) {
        return encrypt(text, 26 - shift);
      }
};


int main() {
  return 0;
}