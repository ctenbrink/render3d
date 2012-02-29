CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT(render3d)
FIND_PACKAGE(Qt4 COMPONENTS QtCore QtGui QtOpenGL REQUIRED)
FIND_PACKAGE(OpenGL REQUIRED)

INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

SET(render3d_SOURCES main.cpp
                     MainWindow.cpp
                     OpenGLWidget.cpp
   )
        
SET(render3d_HEADERS MainWindow.h
                     OpenGLWidget.h)

QT4_WRAP_CPP(render3d_HEADERS_MOC ${render3d_HEADERS})


ADD_EXECUTABLE(render3d ${render3d_SOURCES}
                        ${render3d_HEADERS_MOC}
              )

SET(LIBRARIES ${LIBRARIES} ${QT_LIBRARIES})
SET(LIBRARIES ${LIBRARIES} ${OPENGL_LIBRARIES})

TARGET_LINK_LIBRARIES(render3d ${LIBRARIES})
