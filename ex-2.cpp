#include <PPP/Window.h>
#include <PPP/Graph.h>

int main() {
    Graph_lib::Application app;

    Graph_lib::Window window({20, 20}, 600, 400, "Exercise 2");

    Graph_lib::Rectangle rect{Graph_lib::Point{150, 150}, 100, 30};
    Graph_lib::Text text{Graph_lib::Point{180, 155}, "Howdy"};

    window.attach(rect);
    window.attach(text);

    app.gui_main();
}
