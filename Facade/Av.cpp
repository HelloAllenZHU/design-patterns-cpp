#include <iostream>
#include "Audio.h"
#include "Video.h"
#include "Av.h"

//构造***********************************
Av::Av()
{
    m_pAudio = new Audio;
    m_pVideo = new Video;
}

//析构***********************************
Av::~Av()
{
    delete m_pAudio;
    delete m_pVideo;
}

//初始化*********************************
void Av::init()
{
    m_pAudio->init();
    m_pVideo->init();
}

//开始采集视频****************************
void Av::startVideo()
{
    m_pVideo->start();
}

//停止采集视频****************************
void Av::stopVideo()
{
    m_pVideo->stop();
}

//开始采集音频****************************
void Av::startAudio()
{
    m_pAudio->start();
}

//停止采集音频****************************
void Av::stopAudio()
{
    m_pAudio->stop();
}

//释放***********************************
void Av::release()
{
    delete m_pAudio;
    delete m_pVideo;
}
