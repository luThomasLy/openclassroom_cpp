#ifndef MAFENETRE09_H
#define MAFENETRE09_H

#include <QWidget>
#include <QApplication>
#include <QDirModel>
#include <QVBoxLayout>
#include <QTreeView>
#include <QListView>
#include <QTableView>
#include <QStringListModel>
#include <QPushButton>
#include <QItemSelectionModel>
#include <QModelIndex>
#include <QVariant>
#include <QMessageBox>


class MaFenetre09 : public QWidget
{
    Q_OBJECT
public:
    MaFenetre09();
    ~MaFenetre09();

    private:
        //QDirModel *modele;

        //QTreeView *vue;
        QListView *vue;
        //QTableView *vue;

        QStringListModel *modele;
        QStringList listrePays;

        QPushButton *bouton;

    private slots:
        void clicSelection();
};

#endif // MAFENETRE09_H
