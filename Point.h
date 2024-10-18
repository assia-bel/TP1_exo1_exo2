#pragma once

class Point
{
private:
	double x;
	double y;
	Point(double x = 0.0, double y = 0.0);
public:
	//Point(double x = 0.0,double y = 0.0);
	// question 3- Méthode statique pour créer une instance de Point quand le constructeur est privé
	static Point creerPoint(double , double );

	void afficher() const;
	double distance(const Point &p) const;
	void translater(double dx, double dy);
	bool operator ==(const Point& p) const;
	~Point();

};

