//
// Created by dean on 1/24/20.
//

#include "../include/EngineCore.h"

EngineCore::EngineCore() {


}

void EngineCore::start() {
    TidyThread::start();
}

void EngineCore::setup() {
    TidyWorker::setup();
}

void EngineCore::cleanup() {
    TidyWorker::cleanup();
}

void EngineCore::loop() {
    TidyWorker::loop();
}

void EngineCore::stop() {
    TidyWorker::stop();
}
