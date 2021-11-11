#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
	enum {Name = 20};
	char m_fullname[Name];
	int m_index;
public:
	Plorg(const char * name = "Plorga", int in = 50);
	void set_index();
	void show_data() const;
};

#endif
