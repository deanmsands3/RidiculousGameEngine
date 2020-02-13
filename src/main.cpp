//
// Created by dean on 11/29/19.
//
#include <EngineCore.h>
#include <memory>
int main(int argumentCount, char *argumentStrings[]){
    auto engineCore=std::make_shared<EngineCore>();
    engineCore->start();
    engineCore->join();
    return 0;
}
