#include <iostream>

class SimpleCircle
{
private:
    float * m_radius;

public:
    SimpleCircle();
    SimpleCircle(float radius);
    SimpleCircle(const SimpleCircle & c);
    ~SimpleCircle();

    float GetRadius() const { return *m_radius; }
    void SetRadius(float radius) { *m_radius = radius; }

    const SimpleCircle & operator++();
    const SimpleCircle operator++(int flag);
    SimpleCircle & operator=(const SimpleCircle & c);
};

SimpleCircle::SimpleCircle()
    : SimpleCircle(5.0)
{}

SimpleCircle::SimpleCircle(float radius)
    : m_radius(new float(radius))
{}

SimpleCircle::SimpleCircle(const SimpleCircle & c)
    : SimpleCircle(c.GetRadius())
{
}

SimpleCircle::~SimpleCircle()
{
    delete m_radius;
}

const SimpleCircle& SimpleCircle::operator++()
{
    ++(*m_radius);
    return *this;
}

const SimpleCircle SimpleCircle::operator++(int flag)
{
    SimpleCircle circle(*m_radius);
    ++(*m_radius);
    return circle;
}

SimpleCircle & SimpleCircle::operator=(const SimpleCircle &c)
{
    *m_radius = c.GetRadius();
    return *this;
}

int main (int argc, char *argv[])
{
    
    using std::cout;
    using std::endl;

    SimpleCircle circle;
    // circle.SetRadius(10.2);
    cout << "Circle radius: " << circle.GetRadius() << endl;
    SimpleCircle c = ++circle;
    cout << "++Circle: " << c.GetRadius() << endl;
    cout << "Circle radius: " << circle.GetRadius() << endl;
    SimpleCircle c2 = circle++;
    cout << "Circle++: " << c2.GetRadius() << endl;
    cout << "Circle radius: " << circle.GetRadius() << endl;
    return 0;
}
