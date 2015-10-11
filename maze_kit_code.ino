/*******************************************************************************

Braw Creations Maze Kit
------------------------
Thank you for purchasing and creating your own electrical gizmo! This is the Arduino code required for the Braw Creations Maze Kit.

Braw Creations code written by Lewis Hall.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*******************************************************************************/

//#include is used to include outside libraries in our sketch. In this instance, we are including the Arduino Servo library.
#include <Servo.h>

//servox is the servo that will control the x movement of our maze (side to side movement).
//servoy is the servo that will control the y movement of our maze (forwards and backwards movement).
Servo servox;
Servo servoy;

//We are using analog pin 0 for the left potentiometer and analog pin 4 for the right potentiometer.
int leftpotpin = 0;
int rightpotpin = 4;

//valuex and valuey will be used to to map the x and y movement of our maze.
int valuex;
int valuey; 

void setup() 
{
  //We are telling servox to use digital pin 10.
  servox.attach(10);
  
  //We are telling servoy to use digital pin 9.
  servoy.attach(9);
}

void loop()
{
  //We are declaring that valuex (the x movement of our maze) will be controlled by the left potentiometer.
  valuex = analogRead(leftpotpin);
  
  //The value of the left potentiometer is scaled so that it can be used to control the rotation of the servo.
  valuex = map(valuex, 0, 1023, 0, 180);   
  servox.write(valuex);              

  //We are declaring that valuey (the y movement of our maze) will be controlled by the right potentiometer.
  valuey = analogRead(rightpotpin);
  
  //The value of the right potentiometer is scaled so that it can be used to control the rotation of the servo.  
  valuey = map(valuey, 0, 1023, 0, 180);   
  servoy.write(valuey);                            
}
