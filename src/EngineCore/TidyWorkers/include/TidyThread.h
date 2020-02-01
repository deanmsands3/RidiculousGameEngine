//
// Created by dean on 1/28/20.
//

#ifndef SSS_TIDYTHREAD_H
#define SSS_TIDYTHREAD_H
#include "TidyWorker.h"

class TidyThread: public TidyWorker {
protected:
    void virtual run();
public:
    TidyThread();
};


#endif //SSS_TIDYTHREAD_H
