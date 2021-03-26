/*
 * 	screen_menu_vertex_web.cpp
 *
 *  Created on: 2021/01/30
 *      Author: Juan Franciscos Estrada juanfra@cloudhd.eu
 */
//todo THIS SHOULD NOT BE MENU!!!
#include <stdlib.h>

#include "gui.hpp"
#include "screen_menus.hpp"
#include "screen_menu.hpp"
#include "ScreenHandler.hpp"
#include "config.h"
#include "version.h"
#include "resource.h"
#include "WindowMenuItems.hpp"
#include "i18n.h"
#include "MItem_menus.hpp"
#include "screen_menu_vertex_web.hpp"


ScreenWebVertex::ScreenWebVertex()
    : AddSuperWindow<screen_t>()
    , header(this)
    , qr_web(this, Rect16(90, 50, 60, 140),IDR_PNG_vertex_web)
    , back_button(this, Rect16(SCREEN_WIDTH - PADDING - 64, SCREEN_HEIGHT - PADDING - LINE_HEIGHT - 64, 64, 64), IDR_PNG_back_32px, []() { Screens::Access()->Close(); })
    , back_label(this, Rect16(SCREEN_WIDTH - PADDING - 64, SCREEN_HEIGHT - PADDING - LINE_HEIGHT, 64, LINE_HEIGHT), is_multiline::no) {
    //=============SCREEN INIT===============
    header.SetIcon(IDR_PNG_info_16px);
    header.SetText(_("Web Site"));
    back_label.SetText(_("Back"));
    back_label.SetAlignment(ALIGN_CENTER);
    back_label.font = resource_font(IDR_FNT_SMALL);
}

ScreenFactory::UniquePtr GetScreenWebVertex() {
    return ScreenFactory::Screen<ScreenWebVertex>();
}
