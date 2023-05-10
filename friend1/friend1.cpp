#include <iostream>
using namespace std;

class orang {
private:
	string nama;
public:
	void setNama(string pNama);
	friend class siswa;
};