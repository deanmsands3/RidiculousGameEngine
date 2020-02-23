//
// Created by dean on 1/24/20.
//

#ifndef SSS_ENGINECORE_H
#define SSS_ENGINECORE_H
#include "AssetLib.h"
#include "TidyWorkers.h"


class EngineCore: public TidyThread {
protected:
    void setup() override;
    void loop() override;
    void cleanup() override;

public:
    void start() override;
    void stop() override;
    EngineCore();
};


#endif //SSS_ENGINECORE_H
