#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QMainWindow mainWindow;

    QPushButton *clickButton = new QPushButton("Click Me!");
    QLabel *clickCountLabel = new QLabel("Click Count: 0");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(clickButton);
    layout->addWidget(clickCountLabel);

    QWidget *centralWidget = new QWidget;
    centralWidget->setLayout(layout);
    mainWindow.setCentralWidget(centralWidget);

    int clickCount = 0;
    QObject::connect(clickButton, &QPushButton::clicked, [&](){
        clickCount++;
        clickCountLabel->setText("Click Count: " + QString::number(clickCount));
    });

    mainWindow.show();

    return a.exec();
}

