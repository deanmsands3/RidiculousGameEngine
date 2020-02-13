//
// Created by dean on 1/24/20.
//

#include "../include/EngineCore.h"
#include "../include/Sandbox.h"
EngineCore::EngineCore() {


}

void EngineCore::start() {
    TidyThread::start();
}

void EngineCore::setup() {
    Sandbox sandbox;
}

void EngineCore::cleanup() {

}

void EngineCore::loop() {

}

void EngineCore::stop() {

}
