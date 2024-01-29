#include <iostream>
using namespace std;
class Human
{
public:
    char gender;
    int age;
    int weight;
    string name;
    string city;

    void set_gender(char input_gender) { this->gender = input_gender; }
    char get_gender() { return this->gender; }

    void set_age(int input_age) { this->age = input_age; }
    int get_age() { return this->age; }

    void set_weight(int input_weight) { this->weight = input_weight; }
    int get_weight() { return this->weight; }

    void set_name(string input_name) { this->name = input_name; }
    string get_name() { return this->name; }

    void set_city(string input_city) { this->city = input_city; }
    string get_city() { return this->city; }
};

class Male : public Human
{
public:
    char beard;
    void set_beard(char input_beard) { this->beard = input_beard; }
    char get_beard() { return this->beard; }
};
class Female : public Human
{

public:
    char long_hair;
    void set_long_hair(char input_long_hair) { this->long_hair = input_long_hair; }
    char get_long_hair() { return this->long_hair; }
};

int main()
{
    Male m1;
    Female f1;
    f1.set_name("Alice");
    f1.set_age(35);
    f1.set_gender('F');
    f1.set_weight(60);
    f1.set_city("London");
    f1.set_long_hair('Y');

    m1.set_name("Bob");
    m1.set_age(37);
    m1.set_gender('M');
    m1.set_weight(72);
    m1.set_city("NewYork");
    m1.set_beard('Y');

    cout << "Details are..." << endl;
    cout << "Name : " << f1.get_name() << endl;
    cout << "Age : " << f1.get_age() << endl;
    cout << "Gender : " << f1.get_gender() << endl;
    cout << "City : " << f1.get_city() << endl;
    cout << "Weight : " << f1.get_weight() << endl;
    cout << "Long Hair : " << f1.get_long_hair() << endl;

    cout << "Details are... " << endl;
    cout << "Name : " << m1.get_name() << endl;
    cout << "Age : " << m1.get_age() << endl;
    cout << "Gender : " << m1.get_gender() << endl;
    cout << "City : " << m1.get_city() << endl;
    cout << "Weight : " << m1.get_weight() << endl;
    cout << "Beard : " << m1.get_beard() << endl;
    return 0;
}