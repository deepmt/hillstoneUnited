noinst_PROGRAMS = hillstoneUnited
SUBDIRS = movement \
	brains \
	responces

hillstoneUnited_SOURCES = main.cpp \
			rcss3dsocket.h rcss3dsocket.cpp \
			robot.h robot.cpp \
			world.h world.cpp \
			action.h action.cpp \
			movementmanager.h movementmanager.cpp \
			BrainManager.h BrainManager.cpp \
			util.h
#			$(mSources)

LDADD = ${RCSS3D_LDFLAGS} -lrcssnet3D \
	${BOOST_REGEX_LIB} \
	movement/libmovement.a \
	brains/libbrains.a \
	responces/libresponces.a
