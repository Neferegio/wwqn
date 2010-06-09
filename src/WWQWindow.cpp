/*
 * WWQWindow.cpp
 *
 *  Created on: 15.04.2010 11:13:24
 *      Author: neferegio
 *		Mailto: neferegio@sucht.ru
 */

#include "WWQWindow.h"

WWQWindow::WWQWindow() {
	window = new sf::Window(sf::VideoMode(800, 600, 32), "Some window");
}

WWQWindow::~WWQWindow() {
	if (window->IsOpened())
		window->Close();
	delete window;
}

void WWQWindow::run() {

	while (window->IsOpened()) {
		sf::Event event;
		while (window->GetEvent(event)) {
			if (event.Type == sf::Event::Closed) {
				window->Close();
			}

			if ((event.Type == sf::Event::KeyPressed) && (event.Key.Code == sf::Key::Escape)) {
				window->Close();
			}

			if (event.Type == sf::Event::Resized) {
				glViewport(0, 0, event.Size.Width, event.Size.Height);
			}
		}
		window->SetActive(true);
		render();
		window->Display();

	}
}

void WWQWindow::render() {
	glClearDepth(1.f);
	glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(90.f, 1.f, 1.f, 500.f);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.f, 0.f, -200.f);

    glBegin(GL_QUADS);

        glVertex3f(-50.f, -50.f, -50.f);
        glVertex3f(-50.f,  50.f, -50.f);
        glVertex3f( 50.f,  50.f, -50.f);
        glVertex3f( 50.f, -50.f, -50.f);

        glVertex3f(-50.f, -50.f, 50.f);
        glVertex3f(-50.f,  50.f, 50.f);
        glVertex3f( 50.f,  50.f, 50.f);
        glVertex3f( 50.f, -50.f, 50.f);

        glVertex3f(-50.f, -50.f, -50.f);
        glVertex3f(-50.f,  50.f, -50.f);
        glVertex3f(-50.f,  50.f,  50.f);
        glVertex3f(-50.f, -50.f,  50.f);

        glVertex3f(50.f, -50.f, -50.f);
        glVertex3f(50.f,  50.f, -50.f);
        glVertex3f(50.f,  50.f,  50.f);
        glVertex3f(50.f, -50.f,  50.f);

        glVertex3f(-50.f, -50.f,  50.f);
        glVertex3f(-50.f, -50.f, -50.f);
        glVertex3f( 50.f, -50.f, -50.f);
        glVertex3f( 50.f, -50.f,  50.f);

        glVertex3f(-50.f, 50.f,  50.f);
        glVertex3f(-50.f, 50.f, -50.f);
        glVertex3f( 50.f, 50.f, -50.f);
        glVertex3f( 50.f, 50.f,  50.f);

    glEnd();

//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0,1.0,1.0);
//	glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
//	glBegin(GL_POLYGON);
//	glVertex3f(0.25,0.25,0.0);
//	glVertex3f(0.75,0.25,0.0);
//	glVertex3f(0.75,0.75,0.0);
//	glVertex3f(0.25,0.75,0.0);
//	glEnd();
//	glFlush();

}

