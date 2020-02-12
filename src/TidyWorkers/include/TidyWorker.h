//
// Created by dean on 1/28/20.
//

#ifndef SSS_TIDYWORKER_H
#define SSS_TIDYWORKER_H


class TidyWorker {
protected:
    virtual void run();
    virtual void setup()=0;
    virtual void loop()=0;

    virtual void cleanup()=0;
public:
    virtual void stop()=0;
    TidyWorker();
};


#endif //SSS_TIDYWORKER_H
