/* valagee.h generated by valac, the Vala compiler, do not modify */

#ifndef __VALAGEE_H__
#define __VALAGEE_H__

#include <glib-object.h>
#include <glib.h>

G_BEGIN_DECLS

#define VALA_TYPE_ITERABLE (vala_iterable_get_type ())
#define VALA_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ITERABLE, ValaIterable))
#define VALA_ITERABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ITERABLE, ValaIterableClass))
#define VALA_IS_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ITERABLE))
#define VALA_IS_ITERABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ITERABLE))
#define VALA_ITERABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ITERABLE, ValaIterableClass))

typedef struct _ValaIterable ValaIterable;
typedef struct _ValaIterableClass ValaIterableClass;
typedef struct _ValaIterablePrivate ValaIterablePrivate;

#define VALA_TYPE_ITERATOR (vala_iterator_get_type ())
#define VALA_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ITERATOR, ValaIterator))
#define VALA_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ITERATOR, ValaIteratorClass))
#define VALA_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ITERATOR))
#define VALA_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ITERATOR))
#define VALA_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ITERATOR, ValaIteratorClass))

typedef struct _ValaIterator ValaIterator;
typedef struct _ValaIteratorClass ValaIteratorClass;

#define VALA_TYPE_COLLECTION (vala_collection_get_type ())
#define VALA_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_COLLECTION, ValaCollection))
#define VALA_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_COLLECTION, ValaCollectionClass))
#define VALA_IS_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_COLLECTION))
#define VALA_IS_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_COLLECTION))
#define VALA_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_COLLECTION, ValaCollectionClass))

typedef struct _ValaCollection ValaCollection;
typedef struct _ValaCollectionClass ValaCollectionClass;
typedef struct _ValaCollectionPrivate ValaCollectionPrivate;

#define VALA_TYPE_LIST (vala_list_get_type ())
#define VALA_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LIST, ValaList))
#define VALA_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_LIST, ValaListClass))
#define VALA_IS_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LIST))
#define VALA_IS_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_LIST))
#define VALA_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_LIST, ValaListClass))

typedef struct _ValaList ValaList;
typedef struct _ValaListClass ValaListClass;
typedef struct _ValaListPrivate ValaListPrivate;

#define VALA_TYPE_ARRAY_LIST (vala_array_list_get_type ())
#define VALA_ARRAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ARRAY_LIST, ValaArrayList))
#define VALA_ARRAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ARRAY_LIST, ValaArrayListClass))
#define VALA_IS_ARRAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ARRAY_LIST))
#define VALA_IS_ARRAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ARRAY_LIST))
#define VALA_ARRAY_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ARRAY_LIST, ValaArrayListClass))

typedef struct _ValaArrayList ValaArrayList;
typedef struct _ValaArrayListClass ValaArrayListClass;
typedef struct _ValaArrayListPrivate ValaArrayListPrivate;

#define VALA_TYPE_MAP (vala_map_get_type ())
#define VALA_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MAP, ValaMap))
#define VALA_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_MAP, ValaMapClass))
#define VALA_IS_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MAP))
#define VALA_IS_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_MAP))
#define VALA_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_MAP, ValaMapClass))

typedef struct _ValaMap ValaMap;
typedef struct _ValaMapClass ValaMapClass;
typedef struct _ValaMapPrivate ValaMapPrivate;

#define VALA_TYPE_SET (vala_set_get_type ())
#define VALA_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SET, ValaSet))
#define VALA_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SET, ValaSetClass))
#define VALA_IS_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SET))
#define VALA_IS_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SET))
#define VALA_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SET, ValaSetClass))

typedef struct _ValaSet ValaSet;
typedef struct _ValaSetClass ValaSetClass;

#define VALA_TYPE_MAP_ITERATOR (vala_map_iterator_get_type ())
#define VALA_MAP_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MAP_ITERATOR, ValaMapIterator))
#define VALA_MAP_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_MAP_ITERATOR, ValaMapIteratorClass))
#define VALA_IS_MAP_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MAP_ITERATOR))
#define VALA_IS_MAP_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_MAP_ITERATOR))
#define VALA_MAP_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_MAP_ITERATOR, ValaMapIteratorClass))

typedef struct _ValaMapIterator ValaMapIterator;
typedef struct _ValaMapIteratorClass ValaMapIteratorClass;

#define VALA_TYPE_HASH_MAP (vala_hash_map_get_type ())
#define VALA_HASH_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_HASH_MAP, ValaHashMap))
#define VALA_HASH_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_HASH_MAP, ValaHashMapClass))
#define VALA_IS_HASH_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_HASH_MAP))
#define VALA_IS_HASH_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_HASH_MAP))
#define VALA_HASH_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_HASH_MAP, ValaHashMapClass))

typedef struct _ValaHashMap ValaHashMap;
typedef struct _ValaHashMapClass ValaHashMapClass;
typedef struct _ValaHashMapPrivate ValaHashMapPrivate;
typedef struct _ValaSetPrivate ValaSetPrivate;

#define VALA_TYPE_HASH_SET (vala_hash_set_get_type ())
#define VALA_HASH_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_HASH_SET, ValaHashSet))
#define VALA_HASH_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_HASH_SET, ValaHashSetClass))
#define VALA_IS_HASH_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_HASH_SET))
#define VALA_IS_HASH_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_HASH_SET))
#define VALA_HASH_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_HASH_SET, ValaHashSetClass))

typedef struct _ValaHashSet ValaHashSet;
typedef struct _ValaHashSetClass ValaHashSetClass;
typedef struct _ValaHashSetPrivate ValaHashSetPrivate;
typedef struct _ValaMapIteratorPrivate ValaMapIteratorPrivate;
typedef struct _ValaIteratorPrivate ValaIteratorPrivate;

struct _ValaIterable {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaIterablePrivate * priv;
};

struct _ValaIterableClass {
	GTypeClass parent_class;
	void (*finalize) (ValaIterable *self);
	GType (*get_element_type) (ValaIterable* self);
	ValaIterator* (*iterator) (ValaIterable* self);
};

struct _ValaCollection {
	ValaIterable parent_instance;
	ValaCollectionPrivate * priv;
};

struct _ValaCollectionClass {
	ValaIterableClass parent_class;
	gint (*get_size) (ValaCollection* self);
	gboolean (*get_is_empty) (ValaCollection* self);
	gboolean (*contains) (ValaCollection* self, gconstpointer item);
	gboolean (*add) (ValaCollection* self, gconstpointer item);
	gboolean (*remove) (ValaCollection* self, gconstpointer item);
	void (*clear) (ValaCollection* self);
	gboolean (*add_all) (ValaCollection* self, ValaCollection* collection);
	gpointer* (*to_array) (ValaCollection* self, gint* result_length1);
};

struct _ValaList {
	ValaCollection parent_instance;
	ValaListPrivate * priv;
};

struct _ValaListClass {
	ValaCollectionClass parent_class;
	gpointer (*get) (ValaList* self, gint index);
	void (*set) (ValaList* self, gint index, gconstpointer item);
	gint (*index_of) (ValaList* self, gconstpointer item);
	void (*insert) (ValaList* self, gint index, gconstpointer item);
	gpointer (*remove_at) (ValaList* self, gint index);
	gpointer (*first) (ValaList* self);
	gpointer (*last) (ValaList* self);
	void (*insert_all) (ValaList* self, gint index, ValaCollection* collection);
	void (*sort) (ValaList* self, GCompareDataFunc compare_func, gpointer compare_func_target, GDestroyNotify compare_func_target_destroy_notify);
};

struct _ValaArrayList {
	ValaList parent_instance;
	gpointer* _items;
	gint _items_length1;
	gint __items_size_;
	gint _size;
	ValaArrayListPrivate * priv;
};

struct _ValaArrayListClass {
	ValaListClass parent_class;
};

struct _ValaMap {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaMapPrivate * priv;
};

struct _ValaMapClass {
	GTypeClass parent_class;
	void (*finalize) (ValaMap *self);
	gint (*get_size) (ValaMap* self);
	ValaSet* (*get_keys) (ValaMap* self);
	ValaCollection* (*get_values) (ValaMap* self);
	gboolean (*contains) (ValaMap* self, gconstpointer key);
	gpointer (*get) (ValaMap* self, gconstpointer key);
	void (*set) (ValaMap* self, gconstpointer key, gconstpointer value);
	gboolean (*remove) (ValaMap* self, gconstpointer key);
	void (*clear) (ValaMap* self);
	ValaMapIterator* (*map_iterator) (ValaMap* self);
};

struct _ValaHashMap {
	ValaMap parent_instance;
	ValaHashMapPrivate * priv;
};

struct _ValaHashMapClass {
	ValaMapClass parent_class;
};

struct _ValaSet {
	ValaCollection parent_instance;
	ValaSetPrivate * priv;
};

struct _ValaSetClass {
	ValaCollectionClass parent_class;
};

struct _ValaHashSet {
	ValaSet parent_instance;
	ValaHashSetPrivate * priv;
};

struct _ValaHashSetClass {
	ValaSetClass parent_class;
};

struct _ValaMapIterator {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaMapIteratorPrivate * priv;
};

struct _ValaMapIteratorClass {
	GTypeClass parent_class;
	void (*finalize) (ValaMapIterator *self);
	gboolean (*next) (ValaMapIterator* self);
	gpointer (*get_key) (ValaMapIterator* self);
	gpointer (*get_value) (ValaMapIterator* self);
};

struct _ValaIterator {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaIteratorPrivate * priv;
};

struct _ValaIteratorClass {
	GTypeClass parent_class;
	void (*finalize) (ValaIterator *self);
	gboolean (*next) (ValaIterator* self);
	gboolean (*has_next) (ValaIterator* self);
	gpointer (*get) (ValaIterator* self);
	void (*remove) (ValaIterator* self);
	gboolean (*get_valid) (ValaIterator* self);
};

gpointer vala_iterable_ref (gpointer instance);
void vala_iterable_unref (gpointer instance);
GParamSpec* vala_param_spec_iterable (const gchar* name,
                                      const gchar* nick,
                                      const gchar* blurb,
                                      GType object_type,
                                      GParamFlags flags);
void vala_value_set_iterable (GValue* value,
                              gpointer v_object);
void vala_value_take_iterable (GValue* value,
                               gpointer v_object);
gpointer vala_value_get_iterable (const GValue* value);
GType vala_iterable_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaIterable, vala_iterable_unref)
gpointer vala_iterator_ref (gpointer instance);
void vala_iterator_unref (gpointer instance);
GParamSpec* vala_param_spec_iterator (const gchar* name,
                                      const gchar* nick,
                                      const gchar* blurb,
                                      GType object_type,
                                      GParamFlags flags);
void vala_value_set_iterator (GValue* value,
                              gpointer v_object);
void vala_value_take_iterator (GValue* value,
                               gpointer v_object);
gpointer vala_value_get_iterator (const GValue* value);
GType vala_iterator_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaIterator, vala_iterator_unref)
GType vala_collection_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaCollection, vala_iterable_unref)
GType vala_list_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaList, vala_iterable_unref)
GType vala_array_list_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaArrayList, vala_iterable_unref)
void vala_array_list_set_equal_func (ValaArrayList* self,
                                     GEqualFunc value);
ValaArrayList* vala_array_list_new (GType g_type,
                                    GBoxedCopyFunc g_dup_func,
                                    GDestroyNotify g_destroy_func,
                                    GEqualFunc equal_func);
ValaArrayList* vala_array_list_construct (GType object_type,
                                          GType g_type,
                                          GBoxedCopyFunc g_dup_func,
                                          GDestroyNotify g_destroy_func,
                                          GEqualFunc equal_func);
gint vala_collection_get_size (ValaCollection* self);
gboolean vala_collection_get_is_empty (ValaCollection* self);
gboolean vala_collection_contains (ValaCollection* self,
                                   gconstpointer item);
gboolean vala_collection_add (ValaCollection* self,
                              gconstpointer item);
gboolean vala_collection_remove (ValaCollection* self,
                                 gconstpointer item);
void vala_collection_clear (ValaCollection* self);
gboolean vala_collection_add_all (ValaCollection* self,
                                  ValaCollection* collection);
gpointer* vala_collection_to_array (ValaCollection* self,
                                    gint* result_length1);
ValaCollection* vala_collection_construct (GType object_type,
                                           GType g_type,
                                           GBoxedCopyFunc g_dup_func,
                                           GDestroyNotify g_destroy_func);
gpointer vala_map_ref (gpointer instance);
void vala_map_unref (gpointer instance);
GParamSpec* vala_param_spec_map (const gchar* name,
                                 const gchar* nick,
                                 const gchar* blurb,
                                 GType object_type,
                                 GParamFlags flags);
void vala_value_set_map (GValue* value,
                         gpointer v_object);
void vala_value_take_map (GValue* value,
                          gpointer v_object);
gpointer vala_value_get_map (const GValue* value);
GType vala_map_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaMap, vala_map_unref)
GType vala_set_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaSet, vala_iterable_unref)
gpointer vala_map_iterator_ref (gpointer instance);
void vala_map_iterator_unref (gpointer instance);
GParamSpec* vala_param_spec_map_iterator (const gchar* name,
                                          const gchar* nick,
                                          const gchar* blurb,
                                          GType object_type,
                                          GParamFlags flags);
void vala_value_set_map_iterator (GValue* value,
                                  gpointer v_object);
void vala_value_take_map_iterator (GValue* value,
                                   gpointer v_object);
gpointer vala_value_get_map_iterator (const GValue* value);
GType vala_map_iterator_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaMapIterator, vala_map_iterator_unref)
GType vala_hash_map_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaHashMap, vala_map_unref)
void vala_hash_map_set_key_hash_func (ValaHashMap* self,
                                      GHashFunc value);
void vala_hash_map_set_key_equal_func (ValaHashMap* self,
                                       GEqualFunc value);
void vala_hash_map_set_value_equal_func (ValaHashMap* self,
                                         GEqualFunc value);
ValaHashMap* vala_hash_map_new (GType k_type,
                                GBoxedCopyFunc k_dup_func,
                                GDestroyNotify k_destroy_func,
                                GType v_type,
                                GBoxedCopyFunc v_dup_func,
                                GDestroyNotify v_destroy_func,
                                GHashFunc key_hash_func,
                                GEqualFunc key_equal_func,
                                GEqualFunc value_equal_func);
ValaHashMap* vala_hash_map_construct (GType object_type,
                                      GType k_type,
                                      GBoxedCopyFunc k_dup_func,
                                      GDestroyNotify k_destroy_func,
                                      GType v_type,
                                      GBoxedCopyFunc v_dup_func,
                                      GDestroyNotify v_destroy_func,
                                      GHashFunc key_hash_func,
                                      GEqualFunc key_equal_func,
                                      GEqualFunc value_equal_func);
GType vala_hash_set_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValaHashSet, vala_iterable_unref)
void vala_hash_set_set_hash_func (ValaHashSet* self,
                                  GHashFunc value);
void vala_hash_set_set_equal_func (ValaHashSet* self,
                                   GEqualFunc value);
ValaHashSet* vala_hash_set_new (GType g_type,
                                GBoxedCopyFunc g_dup_func,
                                GDestroyNotify g_destroy_func,
                                GHashFunc hash_func,
                                GEqualFunc equal_func);
ValaHashSet* vala_hash_set_construct (GType object_type,
                                      GType g_type,
                                      GBoxedCopyFunc g_dup_func,
                                      GDestroyNotify g_destroy_func,
                                      GHashFunc hash_func,
                                      GEqualFunc equal_func);
GType vala_iterable_get_element_type (ValaIterable* self);
ValaIterator* vala_iterable_iterator (ValaIterable* self);
ValaIterable* vala_iterable_construct (GType object_type,
                                       GType g_type,
                                       GBoxedCopyFunc g_dup_func,
                                       GDestroyNotify g_destroy_func);
gboolean vala_map_iterator_next (ValaMapIterator* self);
gpointer vala_map_iterator_get_key (ValaMapIterator* self);
gpointer vala_map_iterator_get_value (ValaMapIterator* self);
ValaMapIterator* vala_map_iterator_construct (GType object_type,
                                              GType k_type,
                                              GBoxedCopyFunc k_dup_func,
                                              GDestroyNotify k_destroy_func,
                                              GType v_type,
                                              GBoxedCopyFunc v_dup_func,
                                              GDestroyNotify v_destroy_func);
gboolean vala_iterator_next (ValaIterator* self);
gboolean vala_iterator_has_next (ValaIterator* self);
gpointer vala_iterator_get (ValaIterator* self);
void vala_iterator_remove (ValaIterator* self);
gboolean vala_iterator_get_valid (ValaIterator* self);
ValaIterator* vala_iterator_construct (GType object_type,
                                       GType g_type,
                                       GBoxedCopyFunc g_dup_func,
                                       GDestroyNotify g_destroy_func);
gpointer vala_list_get (ValaList* self,
                        gint index);
void vala_list_set (ValaList* self,
                    gint index,
                    gconstpointer item);
gint vala_list_index_of (ValaList* self,
                         gconstpointer item);
void vala_list_insert (ValaList* self,
                       gint index,
                       gconstpointer item);
gpointer vala_list_remove_at (ValaList* self,
                              gint index);
gpointer vala_list_first (ValaList* self);
gpointer vala_list_last (ValaList* self);
void vala_list_insert_all (ValaList* self,
                           gint index,
                           ValaCollection* collection);
void vala_list_sort (ValaList* self,
                     GCompareDataFunc compare_func,
                     gpointer compare_func_target,
                     GDestroyNotify compare_func_target_destroy_notify);
ValaList* vala_list_construct (GType object_type,
                               GType g_type,
                               GBoxedCopyFunc g_dup_func,
                               GDestroyNotify g_destroy_func);
gint vala_map_get_size (ValaMap* self);
ValaSet* vala_map_get_keys (ValaMap* self);
ValaCollection* vala_map_get_values (ValaMap* self);
gboolean vala_map_contains (ValaMap* self,
                            gconstpointer key);
gpointer vala_map_get (ValaMap* self,
                       gconstpointer key);
void vala_map_set (ValaMap* self,
                   gconstpointer key,
                   gconstpointer value);
gboolean vala_map_remove (ValaMap* self,
                          gconstpointer key);
void vala_map_clear (ValaMap* self);
ValaMapIterator* vala_map_map_iterator (ValaMap* self);
ValaMap* vala_map_construct (GType object_type,
                             GType k_type,
                             GBoxedCopyFunc k_dup_func,
                             GDestroyNotify k_destroy_func,
                             GType v_type,
                             GBoxedCopyFunc v_dup_func,
                             GDestroyNotify v_destroy_func);
ValaSet* vala_set_construct (GType object_type,
                             GType g_type,
                             GBoxedCopyFunc g_dup_func,
                             GDestroyNotify g_destroy_func);

G_END_DECLS

#endif
