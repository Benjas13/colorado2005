#include <gtk/gtk.h>

int main(int argc, char **argv)
{
        GtkWidget *w, *label;
	

        gtk_init(&argc, &argv);

        /* Creo la ventana */
        w = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_fullscreen(GTK_WINDOW(w));//se queda fullScreen

        /* Creamos un "label". */
        label = gtk_label_new("Hola, mundo!");

        /* ... y lo agregamos a la ventana. */
        gtk_container_add(GTK_CONTAINER(w), label);

        gtk_widget_show_all(w);

        /* Finalmente entramos en el bucle principal. */
        gtk_main();

        return 0;
}
