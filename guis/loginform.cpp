#include "loginform.h"

LoginForm::LoginForm()
{
    //G�n�ration du formulaire
    pushButtonLogin = new QPushButton(tr("Connexion !", "Boutton pour la connexion � Mine++"));
    pushButtonQuit = new QPushButton(tr("Annuler et quitter", "Bouton utilis� pour quitter le logiciel"));
        QObject::connect(pushButtonLogin, SIGNAL(clicked()), this, SLOT(close()));

    //Layout

}

LoginForm::~LoginForm()
{
}
