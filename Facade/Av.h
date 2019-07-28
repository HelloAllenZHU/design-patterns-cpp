#ifndef AV_H
#define AV_H

#include "IAv.h"

class Audio;
class Video;

//音视频类
class Av : public IAv
{
public:
    //构造
    Av();

    //析构
    ~Av();

    //初始化
    virtual void init();

    //开始采集视频
    virtual void startVideo();

    //停止采集视频
    virtual void stopVideo();

    //开始采集音频
    virtual void startAudio();

    //停止采集音频
    virtual void stopAudio();

    //释放
    virtual void release();

private:
    Audio   *m_pAudio;
    Video   *m_pVideo;
};

#endif // AV_H
