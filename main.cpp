#include <gtkmm/application.h>
#include <gtkmm/window.h>

auto main(int argc, char* argv[]) -> int
{
    auto app = Gtk::Application::create(argc, argv, "hg");

    Gtk::Window win;

    return app->run(win);
}
