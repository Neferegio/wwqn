BuildDir('build', 'src')

BIN = 'dst/wwqn'
CXX_FLAGS = '-W -Wall -g3 -O0'
SRC_LIST = Glob('./build/*.cpp')
LIB_LIST = ['GL', 'GLU', 'sfml-system', 'sfml-window', 'nbwl']

e=Environment()
e.Program(target=BIN, source=SRC_LIST, LIBS=LIB_LIST, CCFLAGS=CXX_FLAGS)
