package com.qiyi.engine;

import android.content.Context;

public class engine {

    static {
        System.loadLibrary("engine");
    }

    public void initialize(Context context) {
     native_initialize(context);
    }

    public long GetVersion()
    {
        //return 2000;
        return native_GetVersion();
    }

    private native long native_initialize(Context context);
    private native long native_GetVersion();

}
