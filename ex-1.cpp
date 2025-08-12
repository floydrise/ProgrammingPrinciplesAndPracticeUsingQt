#include <PPP/Window.h>
#include <PPP/Graph.h>

int main() {
    Graph_lib::Application app;

    Graph_lib::Window window({20, 20}, 600, 400, "Exercise 1");
    Graph_lib::Rectangle rectangle{Graph_lib::Point{200, 200}, 100, 50};
    rectangle.set_color(Graph_lib::Color::blue);

    Graph_lib::Polygon polygon;
    polygon.add(Graph_lib::Point{100, 50});
    polygon.add(Graph_lib::Point{200, 50});
    polygon.add(Graph_lib::Point{200, 100});
    polygon.add(Graph_lib::Point{100, 100});
    polygon.set_color(Graph_lib::Color::red);


    window.attach(rectangle);
    window.attach(polygon);
    app.gui_main();
}
