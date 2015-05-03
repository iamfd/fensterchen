#include <fensterchen.hpp>
#include <color.hpp>
#include <point2d.hpp>
#include <circle.hpp>
#include <rectangle.hpp>


int main(int argc, char* argv[])
{
  Window win(glm::ivec2(800,800));

  while (!win.shouldClose()) {
    if (win.isKeyPressed(GLFW_KEY_ESCAPE)) {
      win.stop();
    }

    Point2d punkt{0.2, 0.2};
    Point2d punkt2{0.4, 0.4};
    Point2d punkt3{0.2, 0.4};
    Point2d punkt4{0.3, 0.6};
    Color gruen{0.0, 1.0, 0.0};
    Color gelb{1.0, 1.0, 0.0};

    Rectangle eck{punkt, 0.1, 0.1, gruen};
    eck.draw(win);
    
    Circle kreis{punkt2, 0.01, gruen};
    kreis.draw(win);

    Rectangle eck2{punkt3, 0.2, 0.3, gruen};
    eck2.draw(win, gelb);

    Circle kreis2(punkt4, 0.1, gruen);
    kreis2.draw(win, gelb);


    win.update();
  }

  return 0;
}
