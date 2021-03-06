/* search_replace_dialog.c generated by valac UNKNOWN, the Vala compiler
 * generated from search_replace_dialog.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>

#define VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG (vala_develop_search_replace_dialog_get_type ())
#define VALA_DEVELOP_SEARCH_REPLACE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG, valaDevelopSearchReplaceDialog))
#define VALA_DEVELOP_SEARCH_REPLACE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG, valaDevelopSearchReplaceDialogClass))
#define VALA_DEVELOP_IS_SEARCH_REPLACE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG))
#define VALA_DEVELOP_IS_SEARCH_REPLACE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG))
#define VALA_DEVELOP_SEARCH_REPLACE_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG, valaDevelopSearchReplaceDialogClass))

typedef struct _valaDevelopSearchReplaceDialog valaDevelopSearchReplaceDialog;
typedef struct _valaDevelopSearchReplaceDialogClass valaDevelopSearchReplaceDialogClass;
typedef struct _valaDevelopSearchReplaceDialogPrivate valaDevelopSearchReplaceDialogPrivate;
enum  {
	VALA_DEVELOP_SEARCH_REPLACE_DIALOG_0_PROPERTY,
	VALA_DEVELOP_SEARCH_REPLACE_DIALOG_NUM_PROPERTIES
};
static GParamSpec* vala_develop_search_replace_dialog_properties[VALA_DEVELOP_SEARCH_REPLACE_DIALOG_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _valaDevelopSearchReplaceDialog {
	GtkDialog parent_instance;
	valaDevelopSearchReplaceDialogPrivate * priv;
	GtkTreeIter _overviewTreeIter;
	GtkWidget* _parent;
};

struct _valaDevelopSearchReplaceDialogClass {
	GtkDialogClass parent_class;
};

static gpointer vala_develop_search_replace_dialog_parent_class = NULL;

GType vala_develop_search_replace_dialog_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopSearchReplaceDialog, g_object_unref)
valaDevelopSearchReplaceDialog* vala_develop_search_replace_dialog_new (void);
valaDevelopSearchReplaceDialog* vala_develop_search_replace_dialog_construct (GType object_type);
static void vala_develop_search_replace_dialog_finalize (GObject * obj);

valaDevelopSearchReplaceDialog*
vala_develop_search_replace_dialog_construct (GType object_type)
{
	valaDevelopSearchReplaceDialog * self = NULL;
#line 10 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/search_replace_dialog.vala"
	self = (valaDevelopSearchReplaceDialog*) g_object_new (object_type, NULL);
#line 10 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/search_replace_dialog.vala"
	return self;
#line 52 "search_replace_dialog.c"
}

valaDevelopSearchReplaceDialog*
vala_develop_search_replace_dialog_new (void)
{
#line 10 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/search_replace_dialog.vala"
	return vala_develop_search_replace_dialog_construct (VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG);
#line 60 "search_replace_dialog.c"
}

static void
vala_develop_search_replace_dialog_class_init (valaDevelopSearchReplaceDialogClass * klass,
                                               gpointer klass_data)
{
#line 5 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/search_replace_dialog.vala"
	vala_develop_search_replace_dialog_parent_class = g_type_class_peek_parent (klass);
#line 5 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/search_replace_dialog.vala"
	G_OBJECT_CLASS (klass)->finalize = vala_develop_search_replace_dialog_finalize;
#line 71 "search_replace_dialog.c"
}

static void
vala_develop_search_replace_dialog_instance_init (valaDevelopSearchReplaceDialog * self,
                                                  gpointer klass)
{
}

static void
vala_develop_search_replace_dialog_finalize (GObject * obj)
{
	valaDevelopSearchReplaceDialog * self;
#line 5 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/search_replace_dialog.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG, valaDevelopSearchReplaceDialog);
#line 8 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/search_replace_dialog.vala"
	_g_object_unref0 (self->_parent);
#line 5 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/search_replace_dialog.vala"
	G_OBJECT_CLASS (vala_develop_search_replace_dialog_parent_class)->finalize (obj);
#line 90 "search_replace_dialog.c"
}

GType
vala_develop_search_replace_dialog_get_type (void)
{
	static volatile gsize vala_develop_search_replace_dialog_type_id__volatile = 0;
	if (g_once_init_enter (&vala_develop_search_replace_dialog_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (valaDevelopSearchReplaceDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_develop_search_replace_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (valaDevelopSearchReplaceDialog), 0, (GInstanceInitFunc) vala_develop_search_replace_dialog_instance_init, NULL };
		GType vala_develop_search_replace_dialog_type_id;
		vala_develop_search_replace_dialog_type_id = g_type_register_static (gtk_dialog_get_type (), "valaDevelopSearchReplaceDialog", &g_define_type_info, 0);
		g_once_init_leave (&vala_develop_search_replace_dialog_type_id__volatile, vala_develop_search_replace_dialog_type_id);
	}
	return vala_develop_search_replace_dialog_type_id__volatile;
}

