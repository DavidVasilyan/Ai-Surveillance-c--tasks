#include <QApplication>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLineEdit *nameLineEdit = new QLineEdit;
    QLineEdit *emailLineEdit = new QLineEdit;
    QLineEdit *phoneLineEdit = new QLineEdit;

    QPushButton *submitButton = new QPushButton("Submit");

    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow("Name:", nameLineEdit);
    formLayout->addRow("Email:", emailLineEdit);
    formLayout->addRow("Phone:", phoneLineEdit);
    formLayout->addWidget(submitButton);

    QWidget mainWindow;
    mainWindow.setLayout(formLayout);

    QObject::connect(submitButton, &QPushButton::clicked, [&]() {
        QString name = nameLineEdit->text();
        QString email = emailLineEdit->text();
        QString phone = phoneLineEdit->text();

        if (name.isEmpty() || email.isEmpty() || phone.isEmpty())
        {
            QMessageBox::critical(&mainWindow, "Error", "All fields must be filled!");
        }
        else
        {
            QMessageBox::information(&mainWindow, "Success", "Form submitted successfully!");
        }
    });

    mainWindow.show();

    return a.exec();
}
