#ifndef CONTEXT_H
#define CONTEXT_H

#include <iostream>
#include "IState.h"
#include "Context.h"

class IState;

//状态上下文
class Context
{
public:
    //构造
    Context() {
        m_pState = NULL;
    }

    //析构
    ~Context() {
        if ( m_pState != NULL ) {
            delete m_pState;
            m_pState = NULL;
        }
    }

    //设置状态
    void setState( IState *state ) {
        if ( m_pState != NULL ) {
            delete m_pState;
            m_pState = NULL;
        }

        m_pState = state;
    }

    //dosomething
    void dosomething() {
        if ( m_pState != NULL )
            m_pState->dosomething();
    }

private:
    IState *m_pState;
};

#endif // CONTEXT_H
