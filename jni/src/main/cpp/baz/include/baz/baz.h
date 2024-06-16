//
// Created by Flueky Zuo on 2024/6/15.
//

#ifndef DEMO_BAZ_H
#define DEMO_BAZ_H

#include "jni.h"
#include "util.h"
class baz :public util{
public:
    baz();

    ~baz();

public:
    void print() override;

private:
    jstring hello;
    JNIEnv *env;
};

#endif //DEMO_BAZ_H
