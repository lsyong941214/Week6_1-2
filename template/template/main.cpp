#include <iostream>


using namespace std;

template<class T_class>
void print(const T_class& v)
{
	cout << v << endl;
}

template<class T_class>
class Vector2D
{
public:
	T_class x, y;

	void draw() {
		cout << x << endl;
		cout << y << endl;
	}
};


int main()
{
	print(1);
	print(2.345f);
	print("Hello World");
	////////////////////////////
	Vector2D<int> my_vector;
	Vector2D<float> my_vector2;
	Vector2D<double> my_vector3;

	my_vector.x = 1.33;
	my_vector.y = 2.33;
	my_vector.draw();

	my_vector2.x = 1.33f;
	my_vector2.y = 2.33f;
	my_vector2.draw();

	my_vector3.x = 1.444;
	my_vector3.y = 2.444;
	my_vector3.draw();
	////////////////////////////
	return 0;
}