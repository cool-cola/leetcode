#include <iostream>

class BorrowableItem
{
public:
	void checkOut() { std::cout << "1..." << std::endl; };
};

class ElectronicGadget
{
private:
	bool checkOut() const { std::cout << "1..." << std::endl; };
};

class MP3player : public BorrowableItem, public ElectronicGadget
{

};

int main()
{
	MP3player mp;
	//mp.checkOut(); ÓÐÆçÒå
	mp.BorrowableItem::checkOut();

	return 0;
}