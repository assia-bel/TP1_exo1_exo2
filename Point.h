#pragma once

class Point
{
private:
	double x;
	double y;
	Point(double x = 0.0, double y = 0.0);
public:
	//Point(double x = 0.0,double y = 0.0);
	// question 3- M�thode statique pour cr�er une instance de Point quand le constructeur est priv�
	static Point creerPoint(double , double );

	void afficher() const;
	double distance(const Point &p) const;
	void translater(double dx, double dy);
	bool operator ==(const Point& p) const;
	~Point();

};

