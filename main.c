#include <gtk/gtk.h>

GtkBuilder *builder;
GtkLabel *lbl;
int main(int argc,char **argv)
{
GtkWidget *window;
GdkPixbuf *pixbuf;
gtk_init(&argc,&argv);
g_print("Hello from GTK App\n");
pixbuf=gdk_pixbuf_new_from_resource("/images/appicon.png",NULL);
if(pixbuf==NULL)
g_print("pixbuf is nhull");
builder=gtk_builder_new_from_resource("/glades/a.glade");
window=GTK_WIDGET(gtk_builder_get_object(builder,"appwindow"));
lbl=GTK_LABEL(gtk_builder_get_object(builder,"app_status"));


//window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
gtk_label_set_text(lbl,"app is idele");
  
gtk_window_set_title(GTK_WINDOW(window),"First GTK app");
gtk_window_set_icon(GTK_WINDOW(window),pixbuf);
gtk_widget_show(window);
 g_signal_connect(window, "destroy",
      G_CALLBACK(gtk_main_quit), NULL);
gtk_main();


return 0;
}
