#ifndef _JAVA_H_
#define _JAVA_H_

#include "course.h"
#include <iostream>

class Java : public Course
{
public:    
    Java(){};
    virtual ~Java(){};

    virtual void info() {
        std::cout << "Java course" << std::endl; 
    }

    virtual void schedule() {
        std::cout << "Java schedule" << std::endl; 
    }
};
#endif //  _JAVA_H_
