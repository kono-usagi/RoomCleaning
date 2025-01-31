#pragma once

#include    "string.h"

class OnClickListener;

class Button
{
protected:
    int m_pos_x, m_pos_y;  // 位置
    int m_width, m_height; // サイズ

    bool m_is_on_mouse = false;
    bool m_is_click_mouse=false;

    unsigned int m_text_box_color=NULL;//色

    // リスナー
    OnClickListener* m_listner;

protected:
    virtual bool Collision(int mx, int my);

public:
    Button();
    virtual ~Button();

    virtual void OnClick() final;

    virtual void Update(int click, int mx, int my) final;
    virtual void Draw();

    //アクセサ
    inline virtual
        void SetOnClickListener(OnClickListener* obj) final {
        m_listner = obj;
    }

    inline virtual
        void SetSize(int width, int height) final {
        m_width = width;
        m_height = height;
    }

    inline virtual
        void SetPos(int x, int y) final {
        m_pos_x = x;
        m_pos_y = y;
    }

};