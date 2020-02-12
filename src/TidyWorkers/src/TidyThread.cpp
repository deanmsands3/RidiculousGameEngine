//
// Created by dean on 1/28/20.
//

#include "TidyThread.h"
#include <thread>

TidyThread::TidyThread()= default;

void TidyThread::start() {
    _thread = std::make_shared<std::thread>(&TidyThread::run, this);
}

const std::shared_ptr<std::thread> &TidyThread::getThread() const {
    return _thread;
}

void TidyThread::join() {
    _thread->join();
}

TidyThread::~TidyThread(){
    if(_thread->joinable()){_thread->join();}
}
