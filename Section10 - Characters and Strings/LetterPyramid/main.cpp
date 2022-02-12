#include <iostream>
#include <string>

using namespace std;

int main()
{
    string letterPattern;
    cout << "Please enter your letter pattern without spaces:";
    cin >> letterPattern;

    size_t height = letterPattern.size();
    size_t width = height + (height - 1);
    int spaceCount = 0;
    string output;

    while(height >= 1) {
        int patternIdx = 0;
        string halfSpaces;
        for (size_t h = 0; h < spaceCount / 2; h++) {
            halfSpaces += " ";
        }
        string letters;
        for (size_t x = 0; x < width; x++) {
            char currentChar = letterPattern.at(patternIdx);
            letters += currentChar;
            if (patternIdx == letterPattern.size() - 1) {
                patternIdx = 0;
            }
            else {
                patternIdx += 1;
            }
        }
        string currLine = halfSpaces + letters + halfSpaces;
        output = currLine + "\n" + output;

        spaceCount += 2;
        height -= 1;
        width = height + (height - 1);
    }

    cout << "BEHOLD! Your letter pyramid!!!" << endl;
    cout << output;

    return 0;
}
