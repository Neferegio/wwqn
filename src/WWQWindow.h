/*
 * WWQWindow.h
 *
 *  Created on: 15.04.2010 11:13:24
 *      Author: neferegio
 *		Mailto: neferegio@sucht.ru
 */

#ifndef WWQWINDOW_H_
#define WWQWINDOW_H_

#include <SFML/Window.hpp>

class WWQWindow {
	sf::Window *window;

public:
	WWQWindow();
	virtual ~WWQWindow();

	void run();
	virtual void render();
};

#endif /* WWQWINDOW_H_ */
