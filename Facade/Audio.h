#ifndef AUDIO_H
#define AUDIO_H

//音频类
class Audio
{
public:
    //构造
    Audio();

    //析构
    ~Audio();

    //初始化
    void init();

    //开始采集音频
    void start();

    //停止采集音频
    void stop();
};

#endif // AUDIO_H
