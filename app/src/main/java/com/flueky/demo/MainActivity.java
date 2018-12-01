package com.flueky.demo;

import android.app.Activity;
import android.os.Bundle;

import com.facebook.common.util.Hex;

import org.json.simple.JSONObject;


public class MainActivity extends Activity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Hex hex = new Hex();

        JSONObject jsonObject = new JSONObject();

    }
}