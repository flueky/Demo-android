//
// Created by Flueky Zuo on 2024/6/15.
//

#ifndef DEMO_BAR_H
#define DEMO_BAR_H

#include "jni.h"
#include "util.h"

class bar:public util{
public:
    bar();

    ~bar();

public:
    void print() override;

private:
    jstring hello;
    JNIEnv *env;
};


#endif //DEMO_BAR_H
