#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <iostream>

bool isMouseClickDetected() {
    Display* display = XOpenDisplay(nullptr);
    Window rootWindow = XRootWindow(display, XDefaultScreen(display));

    XEvent event;

    // 마우스 클릭 이벤트를 확인
    if (XCheckMaskEvent(display, ButtonPressMask, &event)) {
        XButtonEvent* bevent = (XButtonEvent*)&event.xbutton;

        // 왼쪽 버튼 클릭 확인 (버튼 1)
        if (bevent->button == 1) {
            XCloseDisplay(display);
            return true;
        }
    }

    XCloseDisplay(display);
    return false;
}

int main() {
    while (true) {
        std::cout << "마우스 클릭을 대기 중..." << std::endl;
        
        if (isMouseClickDetected()) {
            std::cout << "마우스 클릭이 감지되었습니다!" << std::endl;
        }
    }

    return 0;
}
