//
// Created by dean on 1/24/20.
//

#include "../include/EngineCore.h"
#include "../include/Sandbox.h"
EngineCore::EngineCore(): _clock() {}

void EngineCore::start() {
    TidyThread::start();
}

void EngineCore::setup() {
    _window=std::make_shared<sf::RenderWindow>(
        sf::VideoMode(200, 200), "Soldiers of Steam and Steel"
    );
    Sandbox sandbox;
}

void EngineCore::cleanup() {

}
sf::Clock EngineCore::getClock() const {
    return _clock;
}

std::shared_ptr<sf::RenderWindow> EngineCore::getWindow(){
    return _window;
}

void EngineCore::loop() {
    while (getWindow()->isOpen())
    {
        tick();
    }
}

void EngineCore::stop() {
    getWindow()->close();
}

sf::Time EngineCore::tick() {
    _clock.restart();

    if(processEvents()){
        stop();
        return sf::Time();
    }

    getWindow()->clear();
    //_window->draw(shape);
    getWindow()->display();
    auto tick_time=_clock.getElapsedTime();
    return tick_time;
}

bool EngineCore::processEvents() {
    sf::Event event;
    while (getWindow()->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            return true;
    }
    return false;
}
