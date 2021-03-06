#ifndef __PLAYER__H__
#define __PLAYER__H__

#include <SFML/Graphics.hpp>
#include "PongEntity.h"

class Player : public PongEntity {
    private:
        sf::RectangleShape m_rectangle;

        static constexpr float m_sizeX{20.f};
        static constexpr float m_sizeY{120.f};
        static constexpr float m_speedMove{600.f};

    public:
        Player(sf::Vector2f const & position);
        void update() override;
        void update(sf::Keyboard::Key upKey, sf::Keyboard::Key downKey);
        void render(sf::RenderWindow & renderWindow) override;
        void checkKeyboard(sf::Time dt, sf::Keyboard::Key upKey, sf::Keyboard::Key downKey);
        float getX() const;
        float getY() const;
        sf::RectangleShape getRect() const;
};

#endif
