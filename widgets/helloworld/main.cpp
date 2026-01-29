#include <iostream>

#include <QtWidgets>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QWidget window;
    window.resize(320, 240);
    window.setWindowTitle(QApplication::translate("toplevel", "Top-level widget"));
    window.show();

    QLabel *label = new QLabel("Hello, World!");
    label->setAlignment(Qt::AlignCenter);

    QLayout *layout = new QBoxLayout(QBoxLayout::Direction::TopToBottom, &window);
    layout->addWidget(label);

    return app.exec();
}
