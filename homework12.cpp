#include <iostream>

using namespace std;

class Rectanle
{
private:
    double height;
    double weight;
public:
    Rectanle()
    {
        height = 0;
        weight = 0;
    }
    Rectanle(double w, double h) :height(h), weight(w) {};
    void set_weight(double w)
    {
        weight = w;
    }
    void set_height(double h)
    {
        height = h;
    }
    double get_weight()
    {
        return weight;
    }
    double get_height()
    {
        return height;
    }
    double area()
    {
        return height * weight;
    }
    void scale(double c)
    {
        weight *= c;
        height *= c;
    }
    void show()
    {
        cout << "ширина: " << weight << "\nвысота: " << height << "\nплощадь:"<<area() << '\n';
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    Rectanle r_1(4, 3);
    r_1.show();
    r_1.scale(2);
    r_1.show();
    return 0;
}

