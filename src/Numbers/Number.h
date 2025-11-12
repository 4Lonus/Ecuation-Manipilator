#ifndef NUMBER_H
#define NUMBER_H

class Number {
    public:
        virtual double getValue() const = 0;
        virtual void print() const = 0;
        virtual ~Number() = default;
};

#endif