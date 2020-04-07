#include "mafenetre09.h"

MaFenetre09::MaFenetre09() : QWidget()
{
    setFixedSize(800, 400);

    QVBoxLayout *layout = new QVBoxLayout;

    QStringList listePays;
    listePays << "France" << "Espagne" << "Italie" << "Portugal" << "Suisse";
    //listePays.append("Maroc");
    modele = new QStringListModel(listePays);

    //exemples avec plusieurs vues
    //modele = new QDirModel;
    //vue = new QTreeView;
    vue = new QListView;
    vue->setSelectionMode(QAbstractItemView::ExtendedSelection);
    //vue = new QTableView;

    vue->setModel(modele);

    bouton = new QPushButton("Afficher la sélection");

    layout->addWidget(vue);
    layout->addWidget(bouton);

    setLayout(layout);

    connect(bouton,SIGNAL(clicked()),this,SLOT(clicSelection()));

}

MaFenetre09::~MaFenetre09()
{

}

void MaFenetre09::clicSelection()
{
//    QItemSelectionModel *selection = vue->selectionModel();
//    QModelIndex indexElementSelectionne = selection->currentIndex();
//    QVariant elementSelectionne = modele->data(indexElementSelectionne, Qt::DisplayRole);
//    QMessageBox::information(this, "Elément sélectionné", elementSelectionne.toString());

    QItemSelectionModel *selection = vue->selectionModel();
    QModelIndexList listeSelections = selection->selectedIndexes();
    QString elementsSelectionnes;

    for (int i = 0 ; i < listeSelections.size() ; i++)
    {
        QVariant elementSelectionne = modele->data(listeSelections[i], Qt::DisplayRole);
        elementsSelectionnes += elementSelectionne.toString() + "<br />";
    }

    QMessageBox::information(this, "Eléments sélectionnés", elementsSelectionnes);

}

