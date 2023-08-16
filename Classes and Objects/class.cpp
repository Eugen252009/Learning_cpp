#include <iostream>

using namespace std;

class Car
{
public:
    string model, manufacturer;
    bool wheels;
    Car(string _manufacturer, string _model, bool _wheels)
    {
        model = _model;
        manufacturer = _manufacturer;
        wheels = _wheels;
        cout << manufacturer << " " << model << endl;
    }
    string hasWheels()
    {
        if (wheels == false)
        {
            return "NO";
        }
        else
        {
            return "Yes";
        }
    }
};
class SuperCar : public Car
{
public:
    int horsepower;
    SuperCar(Car _car, int _horsepower) : Car(_car.manufacturer, _car.model, _car.wheels)
    {
        horsepower = _horsepower;
    }
};

class Book
{
public:
    string title;
    string author;
    int pages;
};

void printbook(Book book)
{
    cout << "The Book is called:" << book.title << endl
         << "Author from the Book is: " << book.author << endl
         << "It has " << book.pages << " Pages." << endl;
}

void printcar(Car car)
{
    cout << "The Car is an: " << car.manufacturer << endl
         << "This model is: " << car.model << endl
         << "Has this Car wheels?: " << car.hasWheels() << endl;
}

int main()
{
    Book book = {
        title : "Harry Potter",
        author : "J.K. Rowling",
        pages : 550
    };
    Book book2 = {
        title : "Harry Potter 2",
        author : "J.K. Rowling",
        pages : 43423
    };

    printbook(book);
    printbook(book2);

    Car tesla = Car("Tesla", "Model Y", false);
    Car porsche = Car("Porsche", "911", true);
    SuperCar koenigsegg(Car("koenigsegg", "1:1", true), 1000);
    printcar(tesla);
    printcar(porsche);
    printcar(koenigsegg);
    return 0;
}
