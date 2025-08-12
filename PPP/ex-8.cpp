#include <PPP/Window.h>
#include <PPP/Graph.h>

const int rect_width = static_cast<int>((static_cast<double>(2) / 3) * Graph_lib::x_max());
const int rect_height = static_cast<int>((static_cast<double>(3) / 4) * Graph_lib::y_max());

int main() {
    Graph_lib::Application app;

    Graph_lib::Window window({20, 20}, Graph_lib::x_max(), Graph_lib::y_max(), "Exercise 5");

    Graph_lib::Circle first{Graph_lib::Point{200, 200}, 60};
    first.set_color(Graph_lib::Color::blue);

    Graph_lib::Circle second{Graph_lib::Point{280, 260}, 60};
    second.set_color(Graph_lib::Color::yellow);

    Graph_lib::Circle third{Graph_lib::Point{360, 200}, 60};

    Graph_lib::Circle fourth{Graph_lib::Point{440, 260}, 60};
    fourth.set_color(Graph_lib::Color::green);

    Graph_lib::Circle fifth{Graph_lib::Point{520, 200}, 60};
    fifth.set_color(Graph_lib::Color::red);

    window.attach(first);
    window.attach(second);
    window.attach(third);
    window.attach(fourth);
    window.attach(fifth);
    app.gui_main();
}
