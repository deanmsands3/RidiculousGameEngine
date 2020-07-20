//
// Created by dean on 1/24/20.
//

#ifndef SSS_ENGINECORE_H
#define SSS_ENGINECORE_H
#include "Assets.h"
#include "TidyWorkers.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>


class EngineCore: public TidyThread {
    std::shared_ptr<sf::RenderWindow> _window;
    sf::Clock _clock;
protected:
    void setup() override;
    void loop() override;
    virtual sf::Time tick();
    virtual bool processEvents();
    void cleanup() override;

public:
    sf::Clock getClock() const;
    std::shared_ptr<sf::RenderWindow> getWindow();
    void start() override;
    void stop() override;
    EngineCore();
};


#endif //SSS_ENGINECORE_H
