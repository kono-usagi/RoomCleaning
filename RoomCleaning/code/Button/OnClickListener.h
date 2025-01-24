#pragma once

//インターフェース
class OnClickListener {
public:
    virtual ~OnClickListener() {}
    virtual void OnClick() = 0;
};