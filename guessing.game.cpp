#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // 使用當前時間作為種子初始化隨機數生成器
    srand(time(0));

    // 生成 1 到 100 之間的一個隨機數
    int secretNumber = rand() % 100 + 1;
    int guess;
    int tries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "\nCongratulations! You guessed the number " << secretNumber << " correctly!" << endl;
            cout << "It took you " << tries << " attempts." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}