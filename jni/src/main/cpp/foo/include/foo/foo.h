//
// Created by Flueky Zuo on 2024/6/15.
//

#ifndef DEMO_FOO_H
#define DEMO_FOO_H

#include "jni.h"
#include "util.h"

class foo : public util {
public:
    foo();

    ~foo();

    void print() override;

private:
    jstring hello;
    JNIEnv *env;
};


#endif //DEMO_FOO_H
