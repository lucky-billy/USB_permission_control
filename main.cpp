#include <QSettings>
#include <QDebug>

int main()
{
    QSettings setting("HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\USBSTOR", QSettings::NativeFormat);
    setting.setValue("Start", 3);
//    setting.setValue("Start", 4);
    return 0;
}
