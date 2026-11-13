#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple <string, int, int, string> person("Benjamin", 38, 76, "Benji");
    /*tuple <string, int, int, string> person1;
    person1 = make_tuple("Allen", 52, 68, "Al");*/
    //tuple <string,int, int, string, string, int, int, string> person2 = tuple_cat(person, person1);
    //auto person2 = tuple_cat(person, person1);

    /*string name;
    int age;
    int height;
    string nickname;
    string name1;
    int age1;
    int height1;
    string nickname1;

    tie(name, age, height, nickname) = person;
    tie(name1, age1, height1, nickname1) = person1;*/

    cout << person[0] << endl;
    //cout << get<0>(person) << endl;
    /*get<0>(person) = "Ben";
    cout << get<0>(person) << endl;*/

    /*apply([](const auto&... person) {
        ((cout << person << " "), ...);
    }, person);

    cout << endl;*/

    /*apply([](const auto&... person1) {
        ((cout << person1 << " "), ...);
    }, person1);

    cout << endl;*/

    /*person.swap(person1);

    apply([](const auto&... person) {
        ((cout << person << " "), ...);
    }, person);

    cout << endl;

    apply([](const auto&... person1) {
        ((cout << person1 << " "), ...);
    }, person1);

    cout << endl;*/

    /*cout << nickname1 << endl;

    apply([](const auto&... person2) {
        ((cout << person2 << " "), ...);
    }, person2);*/

    return 0;
}