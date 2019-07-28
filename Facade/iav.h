#ifndef IAV_H
#define IAV_H

//音视频接口
class IAv
{
public:
    //初始化
    virtual void init() = 0;

    //开始采集视频
    virtual void startVideo() = 0;

    //停止采集视频
    virtual void stopVideo() = 0;

    //开始采集音频
    virtual void startAudio() = 0;

    //停止采集音频
    virtual void stopAudio() = 0;

    //释放
    virtual void release() = 0;
};

#endif // IAV_H
