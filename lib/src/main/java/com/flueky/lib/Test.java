package com.flueky.lib;

public class Test {
    static{
        System.loadLibrary("bar");
//        System.loadLibrary("foo");
        System.loadLibrary("hello-jni");
//        System.loadLibrary("baz");
    }

    public static final void test() {
        System.out.println(hello());
    }

    public static native String hello();
}
