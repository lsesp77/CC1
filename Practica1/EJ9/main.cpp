#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char **argv)
{
    char input[255];
    char *head; // head of a word.
    char *tail; // tail of a word.
    cin.getline(input, 255); // read a whole line.
    tail = input + strlen(input) - 1; // if you can use <cstring>?
    while (tail >= input) {
        if (*tail == 0 || *tail == ' ') {
            tail--; // move to the tail of a word.
        } else {
            tail[1] = 0;
            head = tail;
            while (head >= input) {
                if (head == input || *(head - 1) == ' ') {
                    cout << head << " "; // output a word.
                    tail = head - 1; // seek the next word.
                    break;
                }
                head--; // move to the head of a word.
            }
        }
    }
    cout << endl;
    return 0;
}
