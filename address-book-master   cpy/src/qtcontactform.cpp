#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        cityField(new QLineEdit())
{
    addRow("<Font style = 'color:blue'>First Name</Font>", firstNameField);
    addRow("<Font style = 'color:blue'>Last Name</Font>", lastNameField);
    addRow("<Font style = 'color:blue'>Address</Font>", addressField);
    addRow("<Font style = 'color:blue'>Phone Number</Font>", phoneNumberField);
    addRow("<Font style = 'color:blue'>Email</Font>", emailField);
    addRow("<Font style = 'color:blue'>City</Font>", cityField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    cityField->setText("");
}
