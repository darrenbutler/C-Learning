
class Rectangle
{
private:
	double length, width;//attributes
public:
	Rectangle();//Default constructor

	// Parameterized constructor
	Rectangle(double l, double w);
	// Getter functions 
	double getLength();
	double getWidth();
	// Setter functions
	void setLength(double);
	void setWidth(double);
	double perimeter();
	double area();

	//Destructor
	~Rectangle();
};

