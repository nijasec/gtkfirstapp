
cd rc
glib-compile-resources --target=resources.c --generate-source gresource.xml
cd ..
gcc main.c rc/resources.c -o firstapp `pkg-config --cflags gtk+-3.0` `pkg-config --libs gtk+-3.0` && ./firstapp

