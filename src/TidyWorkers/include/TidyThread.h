//
// Created by dean on 1/28/20.
//

#ifndef SSS_TIDYTHREAD_H
#define SSS_TIDYTHREAD_H
#include "TidyWorker.h"
#include <thread>
#include <memory>
class TidyThread: public TidyWorker {
    std::shared_ptr<std::thread> _thread;
public:
    virtual void start();
    [[nodiscard]] const std::shared_ptr<std::thread> &getThread() const;
    void join();
    TidyThread();
    virtual ~TidyThread();
};


#endif //SSS_TIDYTHREAD_H
