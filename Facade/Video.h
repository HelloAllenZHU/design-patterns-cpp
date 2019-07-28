#ifndef VIDEO_H
#define VIDEO_H

//视频类
class Video
{
public:
    //构造
    Video();

    //析构
    ~Video();

    //初始化
    void init();

    //开始采集视频
    void start();

    //停止采集视频
    void stop();
};

#endif // VIDEO_H
