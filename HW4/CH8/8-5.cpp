#include<iostream>
using namespace std;

class Vector2D{
	public:
		Vector2D();
//		Vector2D(int x, int y);
		int getX() const;
		int getY() const;
		void setX(int x);
		void setY(int y);
	private:
		int x, y;
};

int operator*(const Vector2D& vec1, const Vector2D& vec2);

int main(){
	Vector2D vec1, vec2;
	vec1.setX(9);
	vec1.setY(10);
	vec2.setX(17);
	vec2.setY(0);
	cout << "(" << vec1.getX() << "," << vec1.getY() << ") * (" << vec2.getX() << "," << vec2.getY() << ") = "
	<< vec1 * vec2 << endl;
	vec1.setX(10);
	vec1.setY(12);
	vec2.setX(0);
	vec2.setY(8);
	cout << "(" << vec1.getX() << "," << vec1.getY() << ") * (" << vec2.getX() << "," << vec2.getY() << ") = "
	<< vec1 * vec2 << endl;
	vec1.setX(19);
	vec1.setY(13);
	vec2.setX(7);
	vec2.setY(20);
	cout << "(" << vec1.getX() << "," << vec1.getY() << ") * (" << vec2.getX() << "," << vec2.getY() << ") = "
	<< vec1 * vec2 << endl;
}

int operator*(const Vector2D& vec1, const Vector2D& vec2){
	return (vec1.getX() * vec2.getX() + vec1.getY() * vec2.getY());
}

Vector2D::Vector2D(){
}

/*Vector2D::Vector2D(int x, int y){
	this->x = x;
	this->y = y;
}*/

int Vector2D::getX() const{
	return x;
}

int Vector2D::getY() const{
	return y;
}

void Vector2D::setX(int x){
	this->x = x;
}

void Vector2D::setY(int y){
	this->y = y;
}
