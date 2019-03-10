#pragma once
// include the basic windows header file
#include <windows.h>
#include <windowsx.h>
#include "BaseApplication.h"
#include "GraphicsManager.h"
namespace Phantom {
    class PlatformApplication : public BaseApplication
    {
    public:
        PlatformApplication(GfxConfiguration& config)
            : BaseApplication(config) {};

        virtual int Initialize();
        virtual void Finalize();
        // One cycle of the main loop
        virtual void Tick();

        inline HWND GetMainWindow() const { return m_hWnd; };

    private:
        // the WindowProc function prototype
        static LRESULT CALLBACK WindowProc(HWND hWnd,
                         UINT message,
                         WPARAM wParam,
                         LPARAM lParam);

    private:
        HWND m_hWnd;
    };
}
