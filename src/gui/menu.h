#pragma once

#include "fps.h"
#include "../event_handler.h"
#include "../objects/plane.h"

namespace gui_wrapper {

class UpperMenu {
public:
    UpperMenu() = default;

    void InitializeMenu(tgui::Gui& gui, objects::Plane& plane, FrameRateLabel& fps);

    tgui::MenuBar::Ptr GetMenu() const;

    void SetSize(tgui::Layout width, tgui::Layout height);

    void SetTextSize(unsigned int size);

private:
    tgui::MenuBar::Ptr upper_menu_ = tgui::MenuBar::create();
};

} // namespace gui_wrapper