//
// Created by dean on 1/28/20.
//

#ifndef SSS_TIDYWORKER_H
#define SSS_TIDYWORKER_H


class TidyWorker {
protected:
    void virtual run();
    void virtual setup()=0;
    void virtual loop()=0;
    void virtual cleanup()=0;
    void virtual stop()=0;
public:
    TidyWorker();
};


#endif //SSS_TIDYWORKER_H
