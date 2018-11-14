# DOS-CC-in-linux
Some scripts that make possible to use old C compilers "directly" from the terminal

So...
I like making software for DOS, and it is a real hassle to open up DosBox, mount stuff, compile and etcetera every single time I want to compile something.

So, to fix that, I made these little scripts to set up an evironment where I can just call tcc on the terminal,and that'll open up DosBox and pass the arguments from the terminal command to the actual software call in the emulator.

With this correctly set up, you'll have a little command called tcc in linux that approximates the feel of using tcc in DOS, (I use  Turbo C++ 3.0, so this is set up for that, if you have a working copy of another compiler, a few quick modifications to my files will make it work, should just be a question of changing the switches in your makefiles).

That being said, This DOES NOT include, any compilers, you'll have to source that yourselves.

DEPENDENCIES:

DosBox (dont know what versions work, but really, should be the vast majority of them)
Some DOS C compiler (recommend Borland's Turbo C++ 3.0, but really should work with anything that works in DosBox)

INSTRUCTIONS:

If you want to use other compilers instead of tcc, just edit the tcc file included here and rename it to whatever you want, and change the script to use that file instead of tcc.

Then run install.sh and follow the instructions (The defaults need root, since I place the file in /usr/bin, if you dont trust the script, just copy tcc manually to /usr/bin and copy tcc.conf to ~/.dosbox)

(Did have some issues running Turbo C++ 3.0 with this method if the CPU core type on dosbox was set to auto, DRC64 memory issue or something like that, setting it to normal fixed it.)