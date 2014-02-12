#include <QtWidgets>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

MainWindow::~MainWindow()
{

}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("Menu"));
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
    fileMenu->addAction(saveAsAct);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAct);

    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(cutAct);
    editMenu->addAction(copyAct);
    editMenu->addAction(pasteAct);

    menuBar()->addSeparator();

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);

}

void MainWindow::createToolBars()
{
    fileToolBar = addToolBar(tr("File"));
    fileToolBar->addAction(newAct);
    fileToolBar->addAction(openAct);
    fileToolBar->addAction(saveAct);

    editToolBar = addToolBar(tr("&Edit"));
    editToolBar->addAction(cutAct);
    editToolBar->addAction(copyAct);
    editToolBar->addAction(pasteAct);

}

void MainWindow::createStatusBar()
{
    statusBar()->showMessage(tr("Ready"));
}

void MainWindow::createActions()
{
    newAct = new QAction(QIcon(":/images/new.png"), tr("&New"), this);
    newAct->setShortcuts(QKeySequence::New);
    newAct->setStatusTip(tr("Create a new file"));
    connect(newAct, SIGNAL(triggered()), this, SLOT(newFile()));

    openAct = new QAction(QIcon(":/images/open.png"), tr("&Open"), this);
    openAct->setShortCuts(QKeySequence::Open);
    openAct->setStatusTip(tr("Open a existing file"));
    connect(openAct, SIGNAL(triggered()), this, SLOT(openFile()));

    saveAct = new QAction(QIcon(":/images/save.png"), tr("&Save"), this);
    saveAct->setShortCuts(QKeySequence::Save);
    saveAct->setStatusTip(tr("Save current file."));
    connect(openAct, SIGNAL(triggered()), this, SLOT(save()));

    saveAsAct = new QAction(tr("Save &As"), this);
    saveAsAct->setShortCuts(QKeySequence::SaveAs);
    saveAsAct->setStatusTip(tr("Save current file as another."));
    connect(saveAsAct, SIGNAL(triggered()), this, SLOT(saveAs()));

    exitAct = new QAction(tr("&Exit"), this);
    exitAct->setShortCuts(QKeySequence::Quit);
    exitAct->setStatusTip(tr("Exit TextEditor"));
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));

    cutAct = new QAction(QIcon(":/images/cut.png"), tr("Cu&t"), this);
    cutAct->setShortCuts(QKeySequence::Cut);
    cutAct->setStatusTip(tr("cut selected content."));
    connect(cutAct, SIGNAL(triggered()), textEdit, SLOT(cut()));

    copyAct = new QAction(QIcon(":/images/copy.png"), tr("&Copy"), this);
    copyAct->setShortCuts(QKeySequence::Copy);
    copyAct->setStatusTip(tr("Copy selected content."));
    connect(copyAct, SIGNAL(triggered()), textEdit, SLOT(copy()));

    pasteAct = new QAction(QIcon(":/images/paste.png"), tr("&Paste"), this);
    pasteAct->setShortCuts(QKeySequence::Paste);
    pasteAct->setStatusTip(tr("Paste clipboard's content to into the current selection."));
    connect(pasteAct, SIGNAL(triggered()), textEdit, SLOT(paste()));

    aboutAct = new QAction(tr("&About"), this);
    aboutAct->setStatusTip(tr("About TextEditor"));
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

    aboutQtAct = new QAction(tr("&About &Qt"), this);
    aboutQtAct->setStatusTip(tr("About Qt"));
    connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

    cutAct->setEnabled(false);
    copyAct->setEnabled(false);
    connect(textEdit, SIGNAL(copyAvailable(bool)),
            cutAct, SLOT(setEnabled(bool)));
    connect(textEdit, SIGNAL(copyAvailable(bool)),
            copyAct, SLOT(setEnabled(bool)));
}

void MainWindow::readSettings()
{

}

void MainWindow::writeSettings()
{
}

bool MainWindow::maybeSave()
{

}

void MainWindow::loadFile(const QString &fileName)
{

}

bool MainWindow::saveFile(const QString &fileName)
{

}

void MainWindow::setCurrentFile(const QString &fileName)
{

}

QString MainWindow::strippedName(const QString &fullFileName)
{

}
