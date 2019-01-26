#include "com_qiyi_engine_engine.h"

#include "../../../../../../../src/Editor.h"


jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    JNIEnv* env = NULL;
    jint result = -1;
    if (vm->GetEnv((void**)&env, JNI_VERSION_1_6) != JNI_OK)
        return result;

  /*
    jclass cFrameAvailableListener = env->FindClass("com/iqiyi/nle_editengine/editengine/NLEOnFrameAvailableListener");
    if (cFrameAvailableListener)
    {
        JNINativeMethod mOnFrameAvailable =
                { "_onFrameAvailable", "(Landroid/graphics/SurfaceTexture;J)V",
                  (void*) &CJNISurfaceTextureOnFrameAvailableListener::_onFrameAvailable };
        env->RegisterNatives(cFrameAvailableListener, &mOnFrameAvailable, 1);
        env->DeleteLocalRef(cFrameAvailableListener);
    }
*/
    return JNI_VERSION_1_6;
}

void JNI_OnUnload(JavaVM* vm, void* reserved)
{

}


JNIEXPORT jlong JNICALL Java_com_qiyi_engine_engine_native_1GetVersion
  (JNIEnv *, jobject) {
    Editor *e = new Editor();


    return e->GetCount();
}

JNIEXPORT jlong JNICALL Java_com_qiyi_engine_engine_native_1initialize
        (JNIEnv * jenv, jclass, jobject jcontext)
{
    return 0;
}

