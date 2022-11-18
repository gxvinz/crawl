#pragma once

#include <vector>

#include "ui.h"
#include "tilefont.h"
#include "libconsole.h"

// Case at line 2324

class OptionMenu : public Menu
{
public:
    OptionMenu(int width, int height);

    virtual void _render() override;
    virtual ui::SizeReq _get_preferred_size(ui::Widget::Direction, int) override;
    virtual void _allocate_region() override;
    virtual bool on_event(const ui::Event& event) override;

    virtual shared_ptr<Widget> get_child_at_offset(int, int) override {
        return m_root;
    }

    void display_options();

    void scroll_button_into_view(MenuButton *btn);

protected:
    bool displayed = false;
    bool have_allocated = false;

    shared_ptr<ui::Widget> m_root;
    shared_ptr<ui::Widget> m_grid;

    int m_width;
    int m_height;
}