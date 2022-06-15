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

private:
  void MoveSprite();
  Window m_window;
  sf::Texture m_characterTeture;
  sf::Sprite m_character;
  sf::Vector2i m_increment;
};