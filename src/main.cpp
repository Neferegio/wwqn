/*
 * main.cpp
 *
 *  Created on: 07.04.2010
 *      Author: neferegio
 */

#include "WWQWindow.h"
#include <nbwl/nbwlcore.h>
#include <nbwl/nbwlwidgets.h>

#include <iostream>

void thrower() throw(nbwl::NBException) {
	nbwl::NBException e("Вах, бида... эксепшен случился неожиданно.");
	throw e;
}

int main(int argc, char * argv[]) {
	WWQWindow *wnd = new WWQWindow();

	wnd->run();

	delete wnd;

	nbwl::NBContainer *c = new nbwl::NBContainer();
	c->setX(10);
	c->setY(10);
	c->setWidth(400);
	c->setHeight(150);
	c->setNbName("First test NB Container");
	std::cout << c->toString() << std::endl;
	try {
		thrower();
	} catch (const nbwl::NBException& e) {
		std::cout << "Message: " << e.getMessage() << std::endl;
		std::cout << "Exception: " << e.toString() << std::endl;
	}
	delete c;
	return 0;
}
