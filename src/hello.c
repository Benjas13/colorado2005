//cc hello.c -o hello $(pkg-config gtk+-3.0 --cflags --libs) -export-dynamic
#include <gtk/gtk.h>
 
GtkWidget *g_lbl_hello;
GtkWidget *g_lbl_count;
 
int main(int argc, char *argv[])
{
    GtkBuilder      *builder; 
    GtkWidget       *window;
GError *err = NULL;
 
    gtk_init(&argc, &argv);
 
    builder = gtk_builder_new();
if(0 == gtk_builder_add_from_file (builder, "../glade/Principal.glade", &err))
{
    /* Print out the error. You can use GLib's message logging */
    fprintf(stderr, "Error adding build from file. Error: %s\n", err->message);
    /* Your error handling code goes here */
}

   //gtk_builder_add_from_file (builder, "../glade/Principal.glade", NULL);
 
    window = GTK_WIDGET(gtk_builder_get_object(builder, "Principal"));
if(window==NULL)
	printf("hay un error\n");
  //  gtk_builder_connect_signals(builder, NULL);
    
    // get pointers to the two labels
//    g_lbl_hello = GTK_WIDGET(gtk_builder_get_object(builder, "lbl_hello"));
   // g_lbl_count = GTK_WIDGET(gtk_builder_get_object(builder, "lbl_count"));
 
    g_object_unref(builder);
 
   gtk_widget_show(window);                
    gtk_main();
 
    return 0;
}
