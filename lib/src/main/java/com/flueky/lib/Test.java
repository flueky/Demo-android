package com.flueky.lib;

public class Test {
    static {
        System.loadLibrary("hello-jni");
    }

    public static final void test() {
        System.out.println(hello());
    }

    public static native String hello();
}
