//
// Created by Lorent Evenstar on 8/28/21.
//

#ifndef CPP_STUDY_ARRAY_HPP
#define CPP_STUDY_ARRAY_HPP

#include <iostream>

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
	T &operator[](size_t index);

	class InvalidIndexException : public std::exception {
	public:
		InvalidIndexException();
		virtual ~InvalidIndexException() throw ();
		virtual const char* what() const throw();
	};

	class EmptyArrayException : public std::exception {
	public:
		EmptyArrayException();
		virtual ~EmptyArrayException() throw ();
		virtual const char* what() const throw();
	};
};


template<typename T>
Array<T>::InvalidIndexException::InvalidIndexException() : std::exception() {}

template<typename T>
Array<T>::InvalidIndexException::~InvalidIndexException() throw() {}

template<typename T>
const char *Array<T>::InvalidIndexException::what() const throw() {
	return "Index of array is out of range";
}

template<typename T>
Array<T>::EmptyArrayException::EmptyArrayException() : std::exception() {}

template<typename T>
Array<T>::EmptyArrayException::~EmptyArrayException() throw() {}

template<typename T>
const char *Array<T>::EmptyArrayException::what() const throw() {
	return "Referring to an empty array ";
}

template<typename T>
Array<T>::Array() : _size(0) {
	this->_arr = new T[this->_size];
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	this->_arr = new T[this->_size];
}

template<typename T>
Array<T>::~Array<T>() {
	delete [] this->_arr;
}

template<typename T>
Array<T>::Array(const Array<T> &copy) {
	*this = copy;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy) {
	if (this != &copy) {
		if (this->_size != copy._size) {
			delete [] this->_arr;
			this->_arr = new T[copy._size];
		}
		this->_size = copy._size;
		for (int i = 0; i < this->_size; ++i) {
			this->_arr[i] = copy._arr[i];
		}
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](size_t index) {
	if (this->_size == 0) {
		throw EmptyArrayException();
	}
	else if (index > this->_size) {
		throw InvalidIndexException();
	}
	return this->_arr[index];
}

template<typename T>
size_t Array<T>::size() {
	return this->_size;
}

#endif //CPP_STUDY_ARRAY_HPP
