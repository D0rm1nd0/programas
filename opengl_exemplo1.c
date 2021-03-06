#include <GL/gl.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(512,512);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("The glut hello world program");
    glutDisplayFunc(display);
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glutMainLoop(); // Infinite event loop
    return 0;
 }