#include<iostream>
using namespace std;
class Shape{ //Abstract class
protected:
    float area;
public:
    Shape( void ){
        this->area = 0;
    }
    virtual void acceptRecord( void ) = 0;
    virtual void calculateArea( void ) = 0;
    void printRecord( void ){
        cout << "Area : " << this->area << endl;
    }
    virtual ~Shape( void ){
    }
};
class Rectangle : public Shape {
private:
    float length;
    float breadth;
public:
    Rectangle( void ){
        this->length = 0;
        this->breadth = 0;
    }
    void acceptRecord( void ){
        cout << "Length : ";
        cin >> this->length;
        cout << "Breadth : ";
        cin >> this->breadth;
    }
    void calculateArea( void ){
        this->area = this->length * this->breadth;
    }
};
class Circle : public Shape{
private:
    float radius;
public:
    Circle( void ){
        this->radius = 0;
    }

    void acceptRecord( void ){
        cout << "Radius : ";
        cin >> this->radius;
    }
    void calculateArea( void ){
        this->area = 3.14 * this->radius * this->radius;
    }
};

int main( void ){
    int choice;
    cin>>choice;
        Shape *ptr = nullptr;
        switch( choice ){
            case 1:
                ptr = new Rectangle( ); //OK: Upcasting
                break;
            case 2:
                ptr = new Circle( ); //OK: Upcasting
                break;
        }
        if( ptr != nullptr ){
            ptr->acceptRecord( );
            ptr->calculateArea( );
            ptr->printRecord( );
            delete ptr;
        }
    return 0;
}