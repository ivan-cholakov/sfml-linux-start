#include "Window.h"
class Game
{
public:
  Game();
  ~Game();

  void HandleInput();
  void Update();
  void Render();
  Window *GetWindow();

  sf::Time GetElapsed();
  void RestartClock();

private:
  void MoveSprite();
  Window m_window;
  sf::Clock m_clock;
  sf::Time m_elapsed;

  sf::Texture m_characterTeture;
  sf::Sprite m_character;
  sf::Vector2i m_increment;
};