//
// Created by Lorent Evenstar on 8/28/21.
//

#ifndef CPP_STUDY_ARRAY_HPP
#define CPP_STUDY_ARRAY_HPP


template<typename T>
class Array {

private:
	T *_arr;
	size_t _size;

public:
	Array();
	Array(unsigned  int n); // инициализация T?
	Array(const Array &copy);
	~Array();
	Array &operator=(const Array &copy);
	size_t size(); // возврашает size_t или size_t &
	T &operator[](size_t index); // исключение std::exception - что выводит?

	class InvalidIndexException : public std::exception {
	public:
		InvalidIndexException();
		virtual ~InvalidIndexException() throw ();
		virtual const char* what() const throw();
	};
};


template<typename T>
Array<T>::InvalidIndexException::InvalidIndexException() : std::exception() {}

template<typename T>
Array<T>::InvalidIndexException::~InvalidIndexException() throw() {}

template<typename T>
const char *Array<T>::InvalidIndexException::what() const throw() {
	return "Index of array is out of range"
}

template<typename T>
Array<T>::Array<typename T>() : _size(0) {
	this->_arr = new T[this->_size];
}

template<typename T>
Array<T>::Array<typename T>(unsigned int n) : _size(n) {
	this->_arr = new T[this->_size];
}

template<typename T>
Array<T>::Array<typename T>(const Array<T> &copy) {
	*this = copy;
}

template<typename T>
&Array<T>::operator=(const Array<T> &copy) {
	if (this != &copy) {
		this->_arr = copy._arr;
		this->_size = copy._size;
	}
	return *this;
}

template<typename T>
&Array<T>::operator[](int index) {
	if (index < 0 || index > this->_size) {
		throw InvalidIndexException();
	}
	return this->_arr[index];
}

#endif //CPP_STUDY_ARRAY_HPP
