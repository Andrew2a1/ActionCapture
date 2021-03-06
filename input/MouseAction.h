#ifndef MOUSEACTION_H
#define MOUSEACTION_H

#include "Action.h"
#include "GlobalMouse.h"
#include "MouseEvent.h"

constexpr int MOUSE_ACTION_ID = 2;

class MouseAction : public Action
{
    GlobalMouse *mouse;
    MouseEvent event;

public:
    MouseAction(GlobalMouse *mouse = nullptr);
    MouseAction(GlobalMouse *mouse, const MouseEvent &event);

    const MouseEvent &readEvent() const;

    virtual std::string name() const override;
    virtual void run() override;

    virtual unsigned char typeID() const override;
    virtual SavableData *save() const override;
    virtual bool restore(SavableData *data) override;
};

#endif // MOUSEACTION_H
