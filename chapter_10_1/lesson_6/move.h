#ifndef MOVE_H_
#define MOVE_H_

class Move
{
private:
	double m_x;
	double m_y;
public:
	Move(double a = 0, double b = 0);
	Move(){};
	~Move(){};
	void showmove() const;
	Move add(const Move & m);
	void reset(double a = 0, double b = 0);
};

#endif
