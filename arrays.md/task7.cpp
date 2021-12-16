#include <iostream>

int main() {
    double num_room;
    std::cout << "enter number of room: ";
    std::cin >> num_room;
    double current_room = 1;
    int floor = 1;
    double pred_current_rum = 0;
    while (current_room < num_room) {
        pred_current_rum = current_room;
        current_room += (current_room + 1);
        floor++;
    }
    std::cout << "your floor and number of room on that floor" << floor - 1 <<
    ' ' << num_room - pred_current_rum << '\n';
}
