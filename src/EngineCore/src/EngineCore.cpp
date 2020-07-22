//
// Created by dean on 1/24/20.
//

#include "../include/EngineCore.h"
#include "../include/Sandbox.h"
EngineCore::EngineCore(): _clock(), _running(true) {}

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
    getWindow()->close();
}
sf::Clock EngineCore::getClock() const {
    return _clock;
}

std::shared_ptr<sf::RenderWindow> EngineCore::getWindow(){
    return _window;
}

void EngineCore::loop() {
    //If the game's still running and the window's still open, keep ticking.
    while (
        isRunning() && (getWindow()->isOpen())
    ){
        tick();
    }
}

void EngineCore::stop() {
    _running=false;
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

bool EngineCore::isRunning() const {
    return _running;
}
