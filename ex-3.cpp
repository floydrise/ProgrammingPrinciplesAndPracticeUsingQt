#include <PPP/Window.h>
#include <PPP/Graph.h>

int main() {
    Graph_lib::Application app;

    Graph_lib::Window window({20, 20}, 600, 400, "Exercise 3");

    // 'C'
    Graph_lib::Line line_s_1{Graph_lib::Point{50, 150}, Graph_lib::Point{50, 300}};
    Graph_lib::Line line_s_2{Graph_lib::Point{50, 150}, Graph_lib::Point{150, 150}};
    Graph_lib::Line line_s_3{Graph_lib::Point{50, 300}, Graph_lib::Point{150, 300}};

    // 'П'
    Graph_lib::Line line_p_1{Graph_lib::Point{200, 150}, Graph_lib::Point{200, 300}};
    Graph_lib::Line line_p_2{Graph_lib::Point{200, 150}, Graph_lib::Point{300, 150}};
    Graph_lib::Line line_p_3{Graph_lib::Point{300, 150}, Graph_lib::Point{300, 300}};

    window.attach(line_s_1);
    window.attach(line_s_2);
    window.attach(line_s_3);

    window.attach(line_p_1);
    window.attach(line_p_2);
    window.attach(line_p_3);

    app.gui_main();
}
