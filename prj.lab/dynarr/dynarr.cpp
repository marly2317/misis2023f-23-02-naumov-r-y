#include <dynarr/dynarr.hpp>
#include <stdexcept>
#include <algorithm>

ArrayD::ArrayD(const ArrayD& rhs) {
    size_ = rhs.size_;
    capacity_ = rhs.capacity_;
    data = new double[capacity_];
    for (size_t i = 0; i < ssize(); i++) {
        *(data + i) = *(rhs.data + i);
    }
}

ArrayD::~ArrayD() {
    delete[] data;
}

ArrayD& ArrayD::operator= (const ArrayD& rhs) {
    if (this == &rhs) {
        return *this;
    }
    if (capacity_ >= rhs.ssize())
        size_ = rhs.size_;
    else
    {
        capacity_ = 2 * rhs.ssize() + 1;
        size_ = rhs.ssize();
        data = new double[capacity_];
    }
    for (std::ptrdiff_t i = 0; i < size_; i++)
    {
        *(data + i) = *(rhs.data + i);
    }
    return *this;
}

ArrayD::ArrayD(const std::ptrdiff_t size) {
    if (size < 0) {
        throw std::invalid_argument("size is negative");
    }
    capacity_ = 2 * size + 1;
    size_ = size;
    data = new double[capacity_];
    //std::fill(*data, *(data + size_), 0.0);
    for (std::ptrdiff_t i = 0; i < size_; i++) {
        *(data + i) = 0.0;
    }
}

double& ArrayD::operator[] (const std::ptrdiff_t i) {
    if (i < 0 || i >= ssize()) {
        throw std::out_of_range("Wrong Index");
    }
    return *(data + i);
}

const double& ArrayD::operator[] (const std::ptrdiff_t i) const {
    if (i < 0 || i >= ssize()) {
        throw std::out_of_range("Wrong Index");
    }
    return *(data + i);
}

void ArrayD::resize(const std::ptrdiff_t size) {
    if (size < 0) {
        throw std::invalid_argument("size is negative");
    }
    if (size > capacity_)
    {
        capacity_ = 2 * size + 1;
        double* temp = new double[capacity_];
        for (std::ptrdiff_t i = 0; i < size_; i++)
            *(temp + i) = *(data + i);
        data = temp;
    }
    for (std::ptrdiff_t i = size_; i < size; i++)
        *(data + i) = 0.0;
    size_ = size;
}

void ArrayD::insert(const std::ptrdiff_t index, const double value) {
    if (index < 0 || index >= size_)
        throw std::out_of_range("Wrong Index");
    this->resize(size_ + 1);
    for (std::ptrdiff_t i = size_ - 1; i > index; i--) {
        *(data + i) = *(data + i - 1);
    }
    *(data + index) = value;
}

void ArrayD::remove(const std::ptrdiff_t index, const double value) {
    if (index < 0 || index >= size_)
        throw std::out_of_range("Wrong Index");
    for (std::ptrdiff_t i = index; i < size_ - 1; i++) {
        *(data + i) = *(data + i + 1);
    }
    *(data + index) = value;
    this->resize(ssize() - 1);
}