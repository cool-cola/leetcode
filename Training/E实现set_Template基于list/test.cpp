#include <list>

//¸´ºÏ
template<class T>
class set
{
public:
	bool member(const T& item) const;
	void insert(const T& item);
	void remove(const T& item);
	std::size_t size() const;
private:
	std::list<T> rep;
};

template<class T>
std::size_t set<T>::size() const
{
	return rep.size();
}

template<class T>
void set<T>::remove(const T& item)
{
	std::list<T>::iterator it = std::find(rep.begin(), rep.end(), item);
	if (it != rep.end()) rep.erase(it);
}

template<class T>
void set<T>::insert(const T& item)
{
	if (!member(item)) rep.push_back(item);
}

template<class T>
bool set<T>::member(const T& item) const
{
	return std::find(rep.begin(), rep.end(), item) != rep.end();
}
