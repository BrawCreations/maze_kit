# Braw Creations Maze Kit Code
<p> Hello there, and welcome to the Braw Creations Maze Kit code page! </p>

<p> If you are following the step-by-step guide, this means that you have already constructed your maze kit and wired up the sensors. You're now ready to add some code to your Arduino board and get they sensors working! </p>

<p> But before you begin uploading code to your board, let's make sure you have everything in place. </p>

<h2><a id="user-content-requirements" class="anchor" href="#requirements" aria-hidden="true"><span class="octicon octicon-link"></span></a>Before you begin</h2>

<ul>
<li><p> Obviously you should have the Braw Creations Maze Kit! If you don't have one you can find out more about the product by clicking <a href="https://twitter.com/BrawCreations">here</a>.</p></li>
<li><p> The two potentiometers and two servos should be wired up on the breadboard and connected to the Arduino board. (see the Maze Kit instruction manual for more details and diagrams on how to do this)</p></li>
<li><p> Arduino also needs to be installed on our computer so that we can program and add code to our Arduino board. See the section below <strong>'Install Arduino'</strong>.</p></li>
</ul>

<h2><a id="user-content-installarduino" class="anchor" href="#installarduino" aria-hidden="true"><span class="octicon octicon-link"></span></a>Install Arduino</h2>

<ol>
<li><p> Click <a href="http://arduino.cc/en/Main/Software">here</a> to install the latest version of Arduino, choosing the right version for your specific operating system (Windows, Mac)
<li><p> After downloading has complete, double-click on the file to open it; on Windows, this creates a folder named arduino-[version], such as arduino-1.0. Drag the folder to wherever you want it: your desktop, your Program Files folder etc. On Mac, double-clicking it will open a disk image with an Arduino application (drag it to your Applications folder).</p></li>
<li><p> Now whenever you want to run the Arduino IDE, you’ll open up the Arduino (Windows) or Applications folder (Mac), and double-click the Arduino icon.</p></li>
<li><p> So now we can upload the code! But before we go connecting the Arduino board, be sure to exit the Arduino program on your computer.</p></li> 
</ol>

<h2><a id="user-content-uploadthecode" class="anchor" href="#uploadthecode" aria-hidden="true"><span class="octicon octicon-link"></span></a>Upload the code</h2>

<ol>
<p><li> So first of all let's give the Arduino board some power! Plug in the power cable supplied into the USB jack of your Arduino board and the USB slot of your computer. (The green power LED labelled 'ON' should illuminate on your Arduino board. This indicates power is successfully reaching the Arduino board)</p></li>

<p><li> Now you can open the Arduino software you installed earlier on your computer. After Arduino has loaded, select <strong>File > New</strong> to open a new sketch.</li></p>

<p><li> Let's ensure that the Arduino software knows what port we are using for to plug in the Arduino board.</p>

<p> If you are using Windows, open the Device Manager by clicking the Start menu, right-clicking on Computer (Vista) or My Computer (XP), and choosing Properties. On Windows XP, click Hardware and choose Device Manager. On Vista, click Device Manager (it appears in the list of tasks on the left of the window). Look for the Arduino device in the list under “Ports (COM & LPT)”. The Arduino will appear as “Arduino UNO” and will have a name like COM3. Once you’ve figured out the COM port assignment, you can select that port from the Tools > Serial Port menu in the Arduino IDE.</p>

<p> If you are using Mac, from the Tools menu in the Arduino IDE, select “Serial Port” and select the port that begins with <strong>/dev/cu.usbmodem</strong>; this is the name that your computer uses to refer to the Arduino board.</li></p>

<p> Now the Arduino development environment can talk to the Arduino board and program it!</p> 

<p><li> So we are now ready for some code! To view the code required for the Bare Creations Maze Kit, click <a href="https://github.com/BrawCreations/maze_kit/blob/master/maze_kit.ino">here</a>. The file is called <strong>maze_kit.ino</strong>. This code will allow each of the potentiometers that you wired earlier to control the motion of a servo. The code also has comments to help you understand what each line of the program is doing.</li></p>

<p><li> Now that you are viewing the code, copy the whole file (from lines 1-60) by clicking and dragging your cursor to highight all of the code. Right click on the highlighted code and click 'Copy', or use the copy keyboard shortcut. This will be different for each operating system:</p>

<p><strong>Windows</strong></p>

<p>Ctrl+C (or Ctrl+Insert)</p>

<p><strong>Mac</strong></p>

<p>Command+C</p>

<li><p>Now paste this code into your Arduino sketch, by right clicking in the sketch and selecting paste, or using the paste keyboard shortcut relevant to your operating system:</p></li>

<p><strong>Windows</strong></p>

<p>Ctrl+V (or Shift+Insert)</p>

<p><strong>Mac</strong></p>

<p>Command+V</p>

<p><li>Now click verify to compile the sketch. (the tick icon at the top left of the Arduino window)</li></p>

<p><li>Once the sketch is done compiling, click the upload button next to the tick icon. This will upload the code on to your Arduino board.</li></p>
</ol>

<h2><a id="user-content-success" class="anchor" href="#success" aria-hidden="true"><span class="octicon octicon-link"></span></a>Success!</h2>

<p> You should now have a working program! Each potentiometer, when turned, should control the motion of the servo they've been partnered with.</p>

<p> If you are experiencing any difficulties, please do not hesitate to get in contact with us. We will be happy to answer any questions and help you towards creating your own electrical gizmo!</p>

<p> You can send us a question by <a href="mailto:brawcreationscompany@gmail.com">email</a> or reach out to us on Twitter <a href="https://twitter.com/BrawCreations">@BrawCreations</a>.</p>
