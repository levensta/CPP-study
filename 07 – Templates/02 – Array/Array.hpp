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
	size_t size() const; // возврашает size_t или size_t &
	T &operator[](int index);

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
//	this->_arr = new T[this->_size];
	this->_arr = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	this->_arr = new T[this->_size];
	for (int i = 0; i < this->_size; ++i) {
		this->_arr[i] = 0;
	}
}

template<typename T>
Array<T>::~Array<T>() {
	if (this->_arr) {
		delete [] this->_arr;
	}
}

template<typename T>
Array<T>::Array(const Array<T> &copy) : _arr(NULL), _size(0) {
	*this = copy;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy) {
	if (this != &copy) {
		if (this->_arr && this->_size) {
			delete [] this->_arr;
		}
		this->_size = copy._size;
		this->_arr = new T[this->_size];
		for (int i = 0; i < this->_size; ++i) {
			this->_arr[i] = copy._arr[i];
		}
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](int index) {
	if (this->_size == 0) {
		throw EmptyArrayException();
	}
	else if (static_cast<size_t>(index) >= this->_size || index < 0) {
		throw InvalidIndexException();
	}
	return this->_arr[index];
}

template<typename T>
size_t Array<T>::size() const {
	return this->_size;
}

#endif //CPP_STUDY_ARRAY_HPP
