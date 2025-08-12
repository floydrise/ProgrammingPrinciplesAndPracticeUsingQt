#include <PPP/Window.h>
#include <PPP/Graph.h>

int main() {
    Graph_lib::Application app;

    Graph_lib::Window window({20, 20}, 600, 400, "Exercise 4");

    // row 1
    Graph_lib::Rectangle row1_sq1{Graph_lib::Point{150, 100}, 50, 50};
    Graph_lib::Rectangle row1_sq2{Graph_lib::Point{200, 100}, 50, 50};
    Graph_lib::Rectangle row1_sq3{Graph_lib::Point{250, 100}, 50, 50};

    // row 2
    Graph_lib::Rectangle row2_sq1{Graph_lib::Point{150, 150}, 50, 50};
    Graph_lib::Rectangle row2_sq2{Graph_lib::Point{200, 150}, 50, 50};
    Graph_lib::Rectangle row2_sq3{Graph_lib::Point{250, 150}, 50, 50};

    // row 3
    Graph_lib::Rectangle row3_sq1{Graph_lib::Point{150, 200}, 50, 50};
    Graph_lib::Rectangle row3_sq2{Graph_lib::Point{200, 200}, 50, 50};
    Graph_lib::Rectangle row3_sq3{Graph_lib::Point{250, 200}, 50, 50};

    // red - row1_col2, row2_col1, row2_col3, row3_col2
    row1_sq2.set_fill_color(Graph_lib::Color::red);
    row2_sq1.set_fill_color(Graph_lib::Color::red);
    row2_sq3.set_fill_color(Graph_lib::Color::red);
    row3_sq2.set_fill_color(Graph_lib::Color::red);

    window.attach(row1_sq1);
    window.attach(row1_sq2);
    window.attach(row1_sq3);
    window.attach(row2_sq1);
    window.attach(row2_sq2);
    window.attach(row2_sq3);
    window.attach(row3_sq1);
    window.attach(row3_sq2);
    window.attach(row3_sq3);
    app.gui_main();
}
