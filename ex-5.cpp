#include <PPP/Window.h>
#include <PPP/Graph.h>

const int rect_width = static_cast<int>((static_cast<double>(2) / 3) * Graph_lib::x_max());
const int rect_height = static_cast<int>((static_cast<double>(3) / 4) * Graph_lib::y_max());

int main() {
    Graph_lib::Application app;

    Graph_lib::Window window({20, 20}, Graph_lib::x_max(), Graph_lib::y_max(), "Exercise 5");

    Graph_lib::Rectangle rectangle{
        Graph_lib::Point{100, 100}, (rect_width), (rect_height)
    };

    Graph_lib::Rectangle frame{
        Graph_lib::Point{90, 90}, (rect_width + 20), (rect_height + 20)
    };

    frame.set_color(Graph_lib::Color::red);

    // Below line does not work cause there's no definition for set_style for rectangle, only polygon
    // frame.set_style(Graph_lib::Line_style::solid, 24);

    window.attach(rectangle);
    window.attach(frame);

    app.gui_main();
}
