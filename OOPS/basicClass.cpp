#include <iostream>
using namespace std;
class Person
{
private:
    string blood_group;
    int weight;

public:
    string name;
    int age;
    string city;

    void set_blood_group(string input_blood_group)
    {
        blood_group = input_blood_group;
    }
    void set_weight(int input_weight)
    {
        weight = input_weight;
    }

    string get_blood_group()
    {
        return blood_group;
    }
    int get_weight()
    {
        return weight;
    }
};

int main()
{
    // Creating object statically
    Person person1;

    cout << "Enter the name of the person : (Note: use `_` or `-` instead of space)  ";
    cin >> person1.name;

    cout << "Enter the Age : ";
    cin >> person1.age;

    cout << "Enter the City : ";
    cin >> person1.city;

    cout << "\n --------------- Now enter some sensitive information --------------- " << endl;
    cout << "Enter the Blood Group : ";
    string bg;
    cin >> bg;
    person1.set_blood_group(bg);

    cout << "Enter weight : ";
    int person_weight;
    cin >> person_weight;
    person1.set_weight(person_weight);

    cout << "Following are the details of the person " << person1.name << endl;
    cout << "Name : " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Blood Group : " << person1.get_blood_group() << endl;
    cout << "Weight : " << person1.get_weight() << endl;

    // Creating Object Dynamically
    Person *person2 = new Person;

    cout << "Dynamically creating the object : " << endl;
    cout << "Enter the name of the person : " << endl;
    // cin >> (*person2).name;
    cin >> person2->name;
    cout << "Printing name of the person using (*person2).name : " << (*person2).name << endl;
    cout << "Printing name of the person using person2->name : " << person2->name << endl;
    return 0;
}