#include "PPP/Window.h"
#include "PPP/Graph.h"

double dsin(const double d) { return std::sin(d); };

int main(int /*argc*/, char * /*argv*/[]) {
    Graph_lib::Application app;

    Graph_lib::Window window({20, 20}, 600, 400, "Graphics");

    Graph_lib::Axis xa{Graph_lib::Axis::x, Graph_lib::Point{20, 300}, 280, 10, "x axis"};
    Graph_lib::Axis ya{Graph_lib::Axis::y, Graph_lib::Point{20, 300}, 280, 10, "y axis"};

    Graph_lib::Function sine{dsin, 0, 100, Graph_lib::Point{20, 150}, 1000, 50, 50};

    Graph_lib::Polygon polygon;
    polygon.add(Graph_lib::Point{300, 200});
    polygon.add(Graph_lib::Point{350, 100});
    polygon.add(Graph_lib::Point{400, 200});


    Graph_lib::Rectangle rectangle{Graph_lib::Point{200, 200}, 100, 50};

    Graph_lib::Closed_polyline poly_rect;
    poly_rect.add(Graph_lib::Point{100, 50});
    poly_rect.add(Graph_lib::Point{200, 50});
    poly_rect.add(Graph_lib::Point{200, 100});
    poly_rect.add(Graph_lib::Point{100, 100});
    poly_rect.add(Graph_lib::Point{50, 75});

    rectangle.set_fill_color(Graph_lib::Color::yellow); // color the inside of the rectangle
    polygon.set_style(Graph_lib::Line_style(Graph_lib::Line_style::dash, 4));
    poly_rect.set_style(Graph_lib::Line_style(Graph_lib::Line_style::dash, 2));
    poly_rect.set_fill_color(Graph_lib::Color::green);

    Graph_lib::Text text{Graph_lib::Point{150, 150}, "Hello world!"};
    text.set_font_size(20);
    text.set_font(Graph_lib::Font::helvetica_bold);

    ostringstream oss;
    oss << "Screen size: " << Graph_lib::x_max() << "*" << Graph_lib::y_max() << "; window size: " << window.x_max() <<
            "*" << window.y_max();
    Graph_lib::Text sizes{Graph_lib::Point{100, 20}, oss.str()};

    window.attach(polygon);
    window.attach(sine);
    window.attach(xa);
    window.attach(ya);
    window.attach(rectangle);
    window.attach(poly_rect);
    window.attach(text);
    window.attach(sizes);

    app.gui_main();
}
