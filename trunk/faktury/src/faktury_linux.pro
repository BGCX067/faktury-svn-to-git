TARGET = Faktury
TEMPLATE = app
SOURCES += ./model.cls.cpp \
    ./mainwindow.cpp \
    ./main.cpp \
    ./clients.model.cpp \
    dodaj_klienta.cpp \
    aktualizuj_klienta.cpp \
    products.model.cpp \
    cut.cpp \
    dane_firmy.cpp \
    dodaj_produkt.cpp \
    aktualizuj_produkt.cpp
HEADERS += ./mainwindow.h \
    ui_wystaw_fakture.h \
    ui_wybierz_produkt.h \
    ui_wybierz_kontrahenta.h \
    ui_mainwindow.h \
    ui_dodaj_towar.h \
    ui_dodaj_klienta.h \
    ui_dane_firmy.h \
    dodaj_klienta.h \
    aktualizuj_klienta.h \
    cut.h \
    dane_firmy.h \
    dodaj_produkt.h \
    aktualizuj_produkt.h
FORMS += ../gui/mainwindow.ui \
    ../gui/wybierz_produkt.ui \
    ../gui/wybierz_kontrahenta.ui \
    ../gui/dodaj_towar.ui \
    ../gui/dodaj_klienta.ui \
    ../gui/dane_firmy.ui \
    ../gui/wystaw_fakture.ui
LIBS += -l \
    sqlite3
