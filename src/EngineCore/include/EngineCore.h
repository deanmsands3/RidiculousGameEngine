//
// Created by dean on 1/24/20.
//

#ifndef SSS_ENGINECORE_H
#define SSS_ENGINECORE_H
#include "Sandbox.h"
#include "Assets.h"
#include "TidyWorkers.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#define TICKS_PER_SECOND (32.0)
#define MICROS_PER_TICK ((sf::Int64)(1000000.0/TICKS_PER_SECOND))
class EngineCore: public TidyThread {
    std::shared_ptr<sf::RenderWindow> _window;
    sf::Clock _clock;
    bool _running;
    Sandbox sandbox;
protected:
    [[nodiscard]] bool isRunning() const;
    void setup() override;
    void loop() override;
    virtual sf::Time tick();
    virtual bool processEvents();
    void cleanup() override;
    static sf::Time calc_sleep_time(const sf::Time tick_time);

public:
    [[nodiscard]] sf::Clock getClock() const;
    std::shared_ptr<sf::RenderWindow> getWindow();
    void start() override;
    void stop() override;
    EngineCore();
};


#endif //SSS_ENGINECORE_H
