#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> numbers (5, 0);
    vector <char> chars (5, 'a');

    cout << chars[0];
    cout << numbers.at(0);

    chars.push_back(getchar());
    cout << chars.at(5);

}