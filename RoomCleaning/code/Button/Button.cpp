#include    "DxLib.h"
#include   "OnClickListener.h"

#include "Button.h"

Button::Button() :
    m_pos_x(0), m_pos_y(0),
    m_width(200), m_height(50),
    m_text("Button"),
    m_listner(nullptr),
    m_text_box_color(0xFFFFFF),
    m_text_color(0x000000),
    m_is_click_mouse(false) {
}

Button::~Button() {
    if (m_listner) {
        delete m_listner;
        m_listner = nullptr;
    }
}

bool Button::Collision(int mx, int my) {
    if (m_pos_x < mx && m_pos_x + m_width > mx) {
        if (m_pos_y < my && m_pos_y + m_height > my) {
            return true;
        }
    }
    return false;
}

void Button::OnClick() {
    if (m_listner) m_listner->OnClick();
}

void Button::Update(int click, int mx, int my) {
    m_text_box_color = 0xaa0000;

    // マウスが乗っているか判定
    bool is_on_mouse = Collision(mx, my);

    // 乗っていたら
    if (is_on_mouse == true) {
        m_text_box_color = 0x00aa00;

        // クリック処理
        if (click == 1) m_is_click_mouse = true;
        if (click >= 1) m_text_box_color = 0x0000aa;

        if (click == 0 && m_is_click_mouse == true) {
            m_is_click_mouse = false;
            OnClick();
        }
    }
    //乗っていなかったら
    else if (is_on_mouse == false) {
        //クリック判定をなくす
        m_is_click_mouse = false;
    }
}

void Button::Draw() {
    //枠描画
    DrawBox(m_pos_x, m_pos_y, m_pos_x + m_width, m_pos_y + m_height - 1, m_text_box_color, true);
    //文字描画
    DrawString(m_pos_x + (m_width / 2), m_pos_y + (m_height / 2), m_text, m_text_color);
}