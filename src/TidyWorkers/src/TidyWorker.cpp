//
// Created by dean on 1/28/20.
//

#include "TidyWorker.h"

TidyWorker::TidyWorker() = default;
void TidyWorker::run() {
    setup();
    loop();
    cleanup();
}
