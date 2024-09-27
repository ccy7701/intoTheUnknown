#ifndef DANNY_H
#define DANNY_H

#include <Windows.h>
#include <stdlib.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <gl/glut.h>
#include <math.h>

#include "Point3D.h"
#include "Vector3D.h"
#include "Texture.h"
#include "TexturedShape3D.h"
#include "BlenderMesh.h"
#include "helpers.h"

/* FIRST FACE */
TexturedShape face, ear, hair, bottom, hat;
/* FIRST BODY */
TexturedShape front, back, side, bot, box, box1;

/* SECOND FACE */
TexturedShape face1, ear1, hair1, bottom1, hat1;
/* SECOND BODY */
TexturedShape front1, back1, side1, bot1, box11, box111;

/* THIRD FACE */
TexturedShape face2, ear2, hair2, bottom2, hat2;
/* THIRD BODY */
TexturedShape front2, back2, side2, bot2, box12, box112;

void dannyFaceTextures() {
    Textures_Initialise();
    //face
    face.set(2.0, GetBitmapPath("facea.bmp"));
    ear.set(2.0, GetBitmapPath("ear.bmp"));
    hair.set(2.0, GetBitmapPath("pink.bmp"));
    bottom.set(2.0, GetBitmapPath("facea.bmp"));
    hat.set(2.0, GetBitmapPath("hat.bmp"));
    //face1
    face1.set(2.0, GetBitmapPath("face1.bmp"));
    ear1.set(2.0, GetBitmapPath("ear.bmp"));
    hair1.set(2.0, GetBitmapPath("hair.bmp"));
    bottom1.set(2.0, GetBitmapPath("facea.bmp"));
    hat1.set(2.0, GetBitmapPath("hat1.bmp"));
    //face2
    face2.set(2.0, GetBitmapPath("kid.bmp"));
    ear2.set(2.0, GetBitmapPath("ear.bmp"));
    hair2.set(2.0, GetBitmapPath("hair2.bmp"));
    bottom2.set(2.0, GetBitmapPath("facea.bmp"));
    hat2.set(2.0, GetBitmapPath("hat2.bmp"));
}

void dannyBodyTextures() {
    //body
    front.set(2.0, GetBitmapPath("flower.bmp"));
    back.set(2.0, GetBitmapPath("facea.bmp"));
    side.set(2.0, GetBitmapPath("facea.bmp"));
    bot.set(2.0, GetBitmapPath("facea.bmp"));
    box.set(2.0, GetBitmapPath("hand.bmp"));
    box1.set(2.0, GetBitmapPath("leg.bmp"));
    //body1
    front1.set(2.0, GetBitmapPath("dragon.bmp"));
    back1.set(2.0, GetBitmapPath("facea.bmp"));
    side1.set(2.0, GetBitmapPath("facea.bmp"));
    bot1.set(2.0, GetBitmapPath("facea.bmp"));
    box11.set(2.0, GetBitmapPath("black.bmp"));
    box111.set(2.0, GetBitmapPath("white.bmp"));
    //body2
    front2.set(2.0, GetBitmapPath("shirt.bmp"));
    back2.set(2.0, GetBitmapPath("facea.bmp"));
    side2.set(2.0, GetBitmapPath("facea.bmp"));
    bot2.set(2.0, GetBitmapPath("facea.bmp"));
    box12.set(2.0, GetBitmapPath("pink1.bmp"));
    box112.set(2.0, GetBitmapPath("white.bmp"));
}

// cube shape for danny 1(arm)
void dannys_box(float angle = 0.00) {
    glPushMatrix();

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    box.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 2.0, 0.0);
    box.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
//danny shape for danny 1(leg)
void dannys_box1() {
    glPushMatrix();

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    box1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 2.0, 0.0);
    box1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box1.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
//danny 1
void dannys_face() {
    glPushMatrix();
    glTranslated(0.0, 11.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    ear.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 2.0, 0.0);
    ear.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    hair.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(-90.0, 1.0, 0.0, 0.0);
    face.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    hair.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    hair.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
//danny 1
void dannys_body() {

    glPushMatrix();
    glScaled(1.5, 1.5, 1.5);

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    box1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 4.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 4.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 4.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box1.drawSquare();
    glPopMatrix();


    glPushMatrix();
    glTranslated(0.0, 4.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    front.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 6.0, 0.0);
    box.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
//danny 1 right arm
void dannys_rarm() {

    glPushMatrix();
    glTranslated(4.5, 6.0, 0.0);
    glScaled(1.5, 1.5, 1.5);

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, 2.0, 0.0);
    dannys_box();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -2.0, 0.0);
    dannys_box();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -6.0, 0.0);
    dannys_box();
    glPopMatrix();

    glPopMatrix();
}
//danny 1 left arm
void dannys_larm() {

    glPushMatrix();
    glTranslated(-9.0, 0.0, 0.0);
    dannys_rarm();
    glPopMatrix();

}
//danny 1 right leg
void dannys_rleg() {

    glPushMatrix();
    glTranslated(-1.6, -5.8, 0.0);
    glScaled(1.4, 1.4, 1.4);

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, 2.0, 0.0);
    dannys_box1();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -2.0, 0.0);
    dannys_box1();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -6.0, 0.0);
    dannys_box1();
    glPopMatrix();

    glPopMatrix();
}
//danny 1 left leg
void dannys_lleg() {

    glPushMatrix();
    glTranslated(3.2, 0.0, 0.0);
    dannys_rleg();
    glPopMatrix();

}
//danny 1 hat
void dannys_hat() {

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, 28.2, -2.0);

    glPushMatrix();
    glTranslated(0.0, 4.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    hat.drawCylinder(4.0, 6.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 4.0, 2.0);
    hat.drawCircle(4.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, -2.0, 2.0);
    hat.drawCircle(8.0);
    glPopMatrix();

    glPopMatrix();
}
//shape for danny 2(arm)
void dannys_box11() {
    glPushMatrix();

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    box11.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 2.0, 0.0);
    box11.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box11.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box11.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box11.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box11.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
//shape for danny 2(leg)
void dannys_box111() {
    glPushMatrix();

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    box111.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 2.0, 0.0);
    box111.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box111.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box111.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box111.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box111.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
//danny 2
void dannys_face1() {
    glPushMatrix();
    glTranslated(0.0, 11.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    ear1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 2.0, 0.0);
    ear1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    hair1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(-90.0, 1.0, 0.0, 0.0);
    face1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    hair1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    hair1.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
//danny 2
void dannys_body1() {

    glPushMatrix();
    glScaled(1.5, 1.5, 1.5);

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    box111.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box111.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 4.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box11.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 4.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box11.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box111.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 4.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box11.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box111.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box111.drawSquare();
    glPopMatrix();


    glPushMatrix();
    glTranslated(0.0, 4.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 1.0, 0.0);
    front1.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 6.0, 0.0);
    box11.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
//danny 2 right arm
void dannys_rarm1() {

    glPushMatrix();
    glTranslated(4.5, 6.0, 0.0);
    glScaled(1.5, 1.5, 1.5);

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, 2.0, 0.0);
    dannys_box11();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -2.0, 0.0);
    dannys_box11();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -6.0, 0.0);
    dannys_box11();
    glPopMatrix();

    glPopMatrix();
}
//danny 2 left arm
void dannys_larm1() {

    glPushMatrix();
    glTranslated(-9.0, 0.0, 0.0);
    dannys_rarm1();
    glPopMatrix();

}
//danny 2 right leg
void dannys_rleg1() {

    glPushMatrix();
    glTranslated(-1.6, -5.8, 0.0);
    glScaled(1.4, 1.4, 1.4);

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, 2.0, 0.0);
    dannys_box111();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -2.0, 0.0);
    dannys_box111();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -6.0, 0.0);
    dannys_box11();
    glPopMatrix();

    glPopMatrix();
}
//danny 2 left leg
void dannys_lleg1() {

    glPushMatrix();
    glTranslated(3.2, 0.0, 0.0);
    dannys_rleg1();
    glPopMatrix();

}
//danny 2 hat
void dannys_hat1() {

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, 28.2, -2.0);

    glPushMatrix();
    glTranslated(0.0, 4.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    hat1.drawCylinder(4.0, 6.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 4.0, 2.0);
    hat1.drawCircle(4.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, -2.0, 2.0);
    hat1.drawCircle(8.0);
    glPopMatrix();

    glPopMatrix();
}
void dannys_box12() {//shape for danny 3(arm)
    glPushMatrix();

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    box12.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 2.0, 0.0);
    box12.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box12.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box12.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box12.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box12.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
void dannys_box112() {//shape for danny 3 leg
    glPushMatrix();

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    box112.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 2.0, 0.0);
    box112.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box112.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box112.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box112.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box112.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
void dannys_face2() {//danny 3
    glPushMatrix();
    glTranslated(0.0, 11.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    ear2.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 2.0, 0.0);
    ear2.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    hair2.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(-90.0, 1.0, 0.0, 0.0);
    glRotated(-90.0, 0.0, 1.0, 0.0);
    face2.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    hair2.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    hair2.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
void dannys_body2() {//shape 3

    glPushMatrix();
    glScaled(1.5, 1.5, 1.5);

    glPushMatrix();
    glTranslated(0.0, -2.0, 0.0);
    box12.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box12.drawSquare();//back bot
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 4.0, -2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box112.drawSquare();//back top
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 4.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box112.drawSquare();//top rside
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box12.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 4.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box112.drawSquare();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 0.0, 1.0);
    box12.drawSquare();//bot lside
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 0.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    box12.drawSquare();//front bot
    glPopMatrix();


    glPushMatrix();
    glTranslated(0.0, 4.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    glRotated(90.0, 0.0, 1.0, 0.0);
    front2.drawSquare();//front top
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 6.0, 0.0);
    box112.drawSquare();
    glPopMatrix();

    glPopMatrix();
}
void dannys_rarm2() {//danny 3 right arm

    glPushMatrix();
    glTranslated(4.5, 6.0, 0.0);
    glScaled(1.5, 1.5, 1.5);

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, 2.0, 0.0);
    dannys_box112();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -2.0, 0.0);
    dannys_box112();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -6.0, 0.0);
    dannys_box112();
    glPopMatrix();

    glPopMatrix();
}
void dannys_larm2() {//danny 3 left arm

    glPushMatrix();
    glTranslated(-9.0, 0.0, 0.0);
    dannys_rarm2();
    glPopMatrix();

}
void dannys_rleg2() {//danny 3 right leg

    glPushMatrix();
    glTranslated(-1.6, -5.8, 0.0);
    glScaled(1.4, 1.4, 1.4);

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, 2.0, 0.0);
    dannys_box12();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -2.0, 0.0);
    dannys_box12();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, -6.0, 0.0);
    dannys_box12();
    glPopMatrix();

    glPopMatrix();
}
void dannys_lleg2() {//danny 3 left leg

    glPushMatrix();
    glTranslated(3.2, 0.0, 0.0);
    dannys_rleg2();
    glPopMatrix();

}
void dannys_hat2() {//danny 3

    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(0.0, 28.2, -2.0);

    glPushMatrix();
    glTranslated(0.0, 4.0, 2.0);
    glRotated(90.0, 1.0, 0.0, 0.0);
    hat2.drawCylinder(4.0, 6.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 4.0, 2.0);
    hat2.drawCircle(4.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, -2.0, 2.0);
    hat2.drawCircle(8.0);
    glPopMatrix();

    glPopMatrix();
}

void danny1(float limbAngle1 = 0.00, float limbAngle2 = 0.00) {
    glPushMatrix();
    glRotated(45.0, 0.0, 1.0, 0.0);

    dannys_hat();
    dannys_face();
    dannys_body();

    glPushMatrix();
    glTranslated(0.0, 9.0, 0.0);
    glPushMatrix();
    glRotated(90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle1, 1.0, 0.0, 0.0);
    dannys_rarm();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 9.0, 0.0);
    glPushMatrix();
    glRotated(90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle2, 1.0, 0.0, 0.0);
    dannys_larm();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glPushMatrix();
    glRotated(-90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle1, 1.0, 0.0, 0.0);
    dannys_rleg();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glPushMatrix();
    glRotated(-90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle2, 1.0, 0.0, 0.0);
    dannys_lleg();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
}

void danny2(float limbAngle1 = 0.00, float limbAngle2 = 0.00) {
    glPushMatrix();
    glTranslated(-10.0, 0.0, 0.0);
    glRotated(45.0, 0.0, 1.0, 0.0);

    dannys_hat1();
    dannys_face1();
    dannys_body1();

    glPushMatrix();
    glTranslated(0.0, 9.0, 0.0);
    glPushMatrix();
    glRotated(90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle1, 1.0, 0.0, 0.0);
    dannys_rarm1();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 9.0, 0.0);
    glPushMatrix();
    glRotated(90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle2, 1.0, 0.0, 0.0);
    dannys_larm1();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glPushMatrix();
    glRotated(-90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle1, 1.0, 0.0, 0.0);
    dannys_rleg1();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glPushMatrix();
    glRotated(-90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle2, 1.0, 0.0, 0.0);
    dannys_lleg1();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
}

void danny3(float limbAngle1 = 0.00, float limbAngle2 = 0.00) {
    glPushMatrix();
    glScaled(0.5, 0.5, 0.5);
    glTranslated(14.0, -11.5, 0.0);
    glRotated(45.0, 0.0, 1.0, 0.0);

    dannys_hat2();
    dannys_face2();
    dannys_body2();

    glPushMatrix();
    glTranslated(0.0, 9.0, 0.0);
    glPushMatrix();
    glRotated(90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle1, 1.0, 0.0, 0.0);
    dannys_rarm2();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0, 9.0, 0.0);
    glPushMatrix();
    glRotated(90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle2, 1.0, 0.0, 0.0);
    dannys_larm2();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glPushMatrix();
    glRotated(-90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle1, 1.0, 0.0, 0.0);
    dannys_rleg2();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glPushMatrix();
    glRotated(-90.0, 1.0, 0.0, 0.0);
    glPushMatrix();
    glRotated(limbAngle2, 1.0, 0.0, 0.0);
    dannys_lleg2();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
}

#endif