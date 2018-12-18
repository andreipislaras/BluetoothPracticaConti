/*
 * Generated by gdbus-codegen 2.48.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __BLUEZADAPTERITF_H__
#define __BLUEZADAPTERITF_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.bluez.Adapter1 */

#define BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1 (bluez_adapter_org_bluez_adapter1_get_type ())
#define BLUEZ_ADAPTER_ORG_BLUEZ_ADAPTER1(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1, bluezAdapterOrgBluezAdapter1))
#define BLUEZ_ADAPTER_IS_ORG_BLUEZ_ADAPTER1(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1))
#define BLUEZ_ADAPTER_ORG_BLUEZ_ADAPTER1_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1, bluezAdapterOrgBluezAdapter1Iface))

struct _bluezAdapterOrgBluezAdapter1;
typedef struct _bluezAdapterOrgBluezAdapter1 bluezAdapterOrgBluezAdapter1;
typedef struct _bluezAdapterOrgBluezAdapter1Iface bluezAdapterOrgBluezAdapter1Iface;

struct _bluezAdapterOrgBluezAdapter1Iface
{
  GTypeInterface parent_iface;


  gboolean (*handle_remove_device) (
    bluezAdapterOrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_device);

  gboolean (*handle_set_discovery_filter) (
    bluezAdapterOrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_properties);

  gboolean (*handle_start_discovery) (
    bluezAdapterOrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_stop_discovery) (
    bluezAdapterOrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

  const gchar * (*get_address) (bluezAdapterOrgBluezAdapter1 *object);

  const gchar * (*get_alias) (bluezAdapterOrgBluezAdapter1 *object);

  guint  (*get_class) (bluezAdapterOrgBluezAdapter1 *object);

  gboolean  (*get_discoverable) (bluezAdapterOrgBluezAdapter1 *object);

  guint  (*get_discoverable_timeout) (bluezAdapterOrgBluezAdapter1 *object);

  gboolean  (*get_discovering) (bluezAdapterOrgBluezAdapter1 *object);

  const gchar * (*get_modalias) (bluezAdapterOrgBluezAdapter1 *object);

  const gchar * (*get_name) (bluezAdapterOrgBluezAdapter1 *object);

  gboolean  (*get_pairable) (bluezAdapterOrgBluezAdapter1 *object);

  guint  (*get_pairable_timeout) (bluezAdapterOrgBluezAdapter1 *object);

  gboolean  (*get_powered) (bluezAdapterOrgBluezAdapter1 *object);

  const gchar *const * (*get_uuids) (bluezAdapterOrgBluezAdapter1 *object);

};

GType bluez_adapter_org_bluez_adapter1_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *bluez_adapter_org_bluez_adapter1_interface_info (void);
guint bluez_adapter_org_bluez_adapter1_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void bluez_adapter_org_bluez_adapter1_complete_start_discovery (
    bluezAdapterOrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

void bluez_adapter_org_bluez_adapter1_complete_set_discovery_filter (
    bluezAdapterOrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

void bluez_adapter_org_bluez_adapter1_complete_stop_discovery (
    bluezAdapterOrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

void bluez_adapter_org_bluez_adapter1_complete_remove_device (
    bluezAdapterOrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void bluez_adapter_org_bluez_adapter1_call_start_discovery (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean bluez_adapter_org_bluez_adapter1_call_start_discovery_finish (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean bluez_adapter_org_bluez_adapter1_call_start_discovery_sync (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GCancellable *cancellable,
    GError **error);

void bluez_adapter_org_bluez_adapter1_call_set_discovery_filter (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GVariant *arg_properties,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean bluez_adapter_org_bluez_adapter1_call_set_discovery_filter_finish (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean bluez_adapter_org_bluez_adapter1_call_set_discovery_filter_sync (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GVariant *arg_properties,
    GCancellable *cancellable,
    GError **error);

void bluez_adapter_org_bluez_adapter1_call_stop_discovery (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean bluez_adapter_org_bluez_adapter1_call_stop_discovery_finish (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean bluez_adapter_org_bluez_adapter1_call_stop_discovery_sync (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GCancellable *cancellable,
    GError **error);

void bluez_adapter_org_bluez_adapter1_call_remove_device (
    bluezAdapterOrgBluezAdapter1 *proxy,
    const gchar *arg_device,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean bluez_adapter_org_bluez_adapter1_call_remove_device_finish (
    bluezAdapterOrgBluezAdapter1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean bluez_adapter_org_bluez_adapter1_call_remove_device_sync (
    bluezAdapterOrgBluezAdapter1 *proxy,
    const gchar *arg_device,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *bluez_adapter_org_bluez_adapter1_get_address (bluezAdapterOrgBluezAdapter1 *object);
gchar *bluez_adapter_org_bluez_adapter1_dup_address (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_address (bluezAdapterOrgBluezAdapter1 *object, const gchar *value);

const gchar *bluez_adapter_org_bluez_adapter1_get_name (bluezAdapterOrgBluezAdapter1 *object);
gchar *bluez_adapter_org_bluez_adapter1_dup_name (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_name (bluezAdapterOrgBluezAdapter1 *object, const gchar *value);

const gchar *bluez_adapter_org_bluez_adapter1_get_alias (bluezAdapterOrgBluezAdapter1 *object);
gchar *bluez_adapter_org_bluez_adapter1_dup_alias (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_alias (bluezAdapterOrgBluezAdapter1 *object, const gchar *value);

guint bluez_adapter_org_bluez_adapter1_get_class (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_class (bluezAdapterOrgBluezAdapter1 *object, guint value);

gboolean bluez_adapter_org_bluez_adapter1_get_powered (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_powered (bluezAdapterOrgBluezAdapter1 *object, gboolean value);

gboolean bluez_adapter_org_bluez_adapter1_get_discoverable (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_discoverable (bluezAdapterOrgBluezAdapter1 *object, gboolean value);

guint bluez_adapter_org_bluez_adapter1_get_discoverable_timeout (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_discoverable_timeout (bluezAdapterOrgBluezAdapter1 *object, guint value);

gboolean bluez_adapter_org_bluez_adapter1_get_pairable (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_pairable (bluezAdapterOrgBluezAdapter1 *object, gboolean value);

guint bluez_adapter_org_bluez_adapter1_get_pairable_timeout (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_pairable_timeout (bluezAdapterOrgBluezAdapter1 *object, guint value);

gboolean bluez_adapter_org_bluez_adapter1_get_discovering (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_discovering (bluezAdapterOrgBluezAdapter1 *object, gboolean value);

const gchar *const *bluez_adapter_org_bluez_adapter1_get_uuids (bluezAdapterOrgBluezAdapter1 *object);
gchar **bluez_adapter_org_bluez_adapter1_dup_uuids (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_uuids (bluezAdapterOrgBluezAdapter1 *object, const gchar *const *value);

const gchar *bluez_adapter_org_bluez_adapter1_get_modalias (bluezAdapterOrgBluezAdapter1 *object);
gchar *bluez_adapter_org_bluez_adapter1_dup_modalias (bluezAdapterOrgBluezAdapter1 *object);
void bluez_adapter_org_bluez_adapter1_set_modalias (bluezAdapterOrgBluezAdapter1 *object, const gchar *value);


/* ---- */

#define BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_PROXY (bluez_adapter_org_bluez_adapter1_proxy_get_type ())
#define BLUEZ_ADAPTER_ORG_BLUEZ_ADAPTER1_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_PROXY, bluezAdapterOrgBluezAdapter1Proxy))
#define BLUEZ_ADAPTER_ORG_BLUEZ_ADAPTER1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_PROXY, bluezAdapterOrgBluezAdapter1ProxyClass))
#define BLUEZ_ADAPTER_ORG_BLUEZ_ADAPTER1_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_PROXY, bluezAdapterOrgBluezAdapter1ProxyClass))
#define BLUEZ_ADAPTER_IS_ORG_BLUEZ_ADAPTER1_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_PROXY))
#define BLUEZ_ADAPTER_IS_ORG_BLUEZ_ADAPTER1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_PROXY))

typedef struct _bluezAdapterOrgBluezAdapter1Proxy bluezAdapterOrgBluezAdapter1Proxy;
typedef struct _bluezAdapterOrgBluezAdapter1ProxyClass bluezAdapterOrgBluezAdapter1ProxyClass;
typedef struct _bluezAdapterOrgBluezAdapter1ProxyPrivate bluezAdapterOrgBluezAdapter1ProxyPrivate;

struct _bluezAdapterOrgBluezAdapter1Proxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  bluezAdapterOrgBluezAdapter1ProxyPrivate *priv;
};

struct _bluezAdapterOrgBluezAdapter1ProxyClass
{
  GDBusProxyClass parent_class;
};

GType bluez_adapter_org_bluez_adapter1_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (bluezAdapterOrgBluezAdapter1Proxy, g_object_unref)
#endif

void bluez_adapter_org_bluez_adapter1_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
bluezAdapterOrgBluezAdapter1 *bluez_adapter_org_bluez_adapter1_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
bluezAdapterOrgBluezAdapter1 *bluez_adapter_org_bluez_adapter1_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void bluez_adapter_org_bluez_adapter1_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
bluezAdapterOrgBluezAdapter1 *bluez_adapter_org_bluez_adapter1_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
bluezAdapterOrgBluezAdapter1 *bluez_adapter_org_bluez_adapter1_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_SKELETON (bluez_adapter_org_bluez_adapter1_skeleton_get_type ())
#define BLUEZ_ADAPTER_ORG_BLUEZ_ADAPTER1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_SKELETON, bluezAdapterOrgBluezAdapter1Skeleton))
#define BLUEZ_ADAPTER_ORG_BLUEZ_ADAPTER1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_SKELETON, bluezAdapterOrgBluezAdapter1SkeletonClass))
#define BLUEZ_ADAPTER_ORG_BLUEZ_ADAPTER1_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_SKELETON, bluezAdapterOrgBluezAdapter1SkeletonClass))
#define BLUEZ_ADAPTER_IS_ORG_BLUEZ_ADAPTER1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_SKELETON))
#define BLUEZ_ADAPTER_IS_ORG_BLUEZ_ADAPTER1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), BLUEZ_ADAPTER_TYPE_ORG_BLUEZ_ADAPTER1_SKELETON))

typedef struct _bluezAdapterOrgBluezAdapter1Skeleton bluezAdapterOrgBluezAdapter1Skeleton;
typedef struct _bluezAdapterOrgBluezAdapter1SkeletonClass bluezAdapterOrgBluezAdapter1SkeletonClass;
typedef struct _bluezAdapterOrgBluezAdapter1SkeletonPrivate bluezAdapterOrgBluezAdapter1SkeletonPrivate;

struct _bluezAdapterOrgBluezAdapter1Skeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  bluezAdapterOrgBluezAdapter1SkeletonPrivate *priv;
};

struct _bluezAdapterOrgBluezAdapter1SkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType bluez_adapter_org_bluez_adapter1_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (bluezAdapterOrgBluezAdapter1Skeleton, g_object_unref)
#endif

bluezAdapterOrgBluezAdapter1 *bluez_adapter_org_bluez_adapter1_skeleton_new (void);


/* ---- */

#define BLUEZ_ADAPTER_TYPE_OBJECT (bluez_adapter_object_get_type ())
#define BLUEZ_ADAPTER_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_ADAPTER_TYPE_OBJECT, bluezAdapterObject))
#define BLUEZ_ADAPTER_IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_ADAPTER_TYPE_OBJECT))
#define BLUEZ_ADAPTER_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), BLUEZ_ADAPTER_TYPE_OBJECT, bluezAdapterObject))

struct _bluezAdapterObject;
typedef struct _bluezAdapterObject bluezAdapterObject;
typedef struct _bluezAdapterObjectIface bluezAdapterObjectIface;

struct _bluezAdapterObjectIface
{
  GTypeInterface parent_iface;
};

GType bluez_adapter_object_get_type (void) G_GNUC_CONST;

bluezAdapterOrgBluezAdapter1 *bluez_adapter_object_get_org_bluez_adapter1 (bluezAdapterObject *object);
bluezAdapterOrgBluezAdapter1 *bluez_adapter_object_peek_org_bluez_adapter1 (bluezAdapterObject *object);

#define BLUEZ_ADAPTER_TYPE_OBJECT_PROXY (bluez_adapter_object_proxy_get_type ())
#define BLUEZ_ADAPTER_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_ADAPTER_TYPE_OBJECT_PROXY, bluezAdapterObjectProxy))
#define BLUEZ_ADAPTER_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), BLUEZ_ADAPTER_TYPE_OBJECT_PROXY, bluezAdapterObjectProxyClass))
#define BLUEZ_ADAPTER_OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), BLUEZ_ADAPTER_TYPE_OBJECT_PROXY, bluezAdapterObjectProxyClass))
#define BLUEZ_ADAPTER_IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_ADAPTER_TYPE_OBJECT_PROXY))
#define BLUEZ_ADAPTER_IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), BLUEZ_ADAPTER_TYPE_OBJECT_PROXY))

typedef struct _bluezAdapterObjectProxy bluezAdapterObjectProxy;
typedef struct _bluezAdapterObjectProxyClass bluezAdapterObjectProxyClass;
typedef struct _bluezAdapterObjectProxyPrivate bluezAdapterObjectProxyPrivate;

struct _bluezAdapterObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  bluezAdapterObjectProxyPrivate *priv;
};

struct _bluezAdapterObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType bluez_adapter_object_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (bluezAdapterObjectProxy, g_object_unref)
#endif

bluezAdapterObjectProxy *bluez_adapter_object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define BLUEZ_ADAPTER_TYPE_OBJECT_SKELETON (bluez_adapter_object_skeleton_get_type ())
#define BLUEZ_ADAPTER_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_ADAPTER_TYPE_OBJECT_SKELETON, bluezAdapterObjectSkeleton))
#define BLUEZ_ADAPTER_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), BLUEZ_ADAPTER_TYPE_OBJECT_SKELETON, bluezAdapterObjectSkeletonClass))
#define BLUEZ_ADAPTER_OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), BLUEZ_ADAPTER_TYPE_OBJECT_SKELETON, bluezAdapterObjectSkeletonClass))
#define BLUEZ_ADAPTER_IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_ADAPTER_TYPE_OBJECT_SKELETON))
#define BLUEZ_ADAPTER_IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), BLUEZ_ADAPTER_TYPE_OBJECT_SKELETON))

typedef struct _bluezAdapterObjectSkeleton bluezAdapterObjectSkeleton;
typedef struct _bluezAdapterObjectSkeletonClass bluezAdapterObjectSkeletonClass;
typedef struct _bluezAdapterObjectSkeletonPrivate bluezAdapterObjectSkeletonPrivate;

struct _bluezAdapterObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  bluezAdapterObjectSkeletonPrivate *priv;
};

struct _bluezAdapterObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType bluez_adapter_object_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (bluezAdapterObjectSkeleton, g_object_unref)
#endif

bluezAdapterObjectSkeleton *bluez_adapter_object_skeleton_new (const gchar *object_path);
void bluez_adapter_object_skeleton_set_org_bluez_adapter1 (bluezAdapterObjectSkeleton *object, bluezAdapterOrgBluezAdapter1 *interface_);

/* ---- */

#define BLUEZ_ADAPTER_TYPE_OBJECT_MANAGER_CLIENT (bluez_adapter_object_manager_client_get_type ())
#define BLUEZ_ADAPTER_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_ADAPTER_TYPE_OBJECT_MANAGER_CLIENT, bluezAdapterObjectManagerClient))
#define BLUEZ_ADAPTER_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), BLUEZ_ADAPTER_TYPE_OBJECT_MANAGER_CLIENT, bluezAdapterObjectManagerClientClass))
#define BLUEZ_ADAPTER_OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), BLUEZ_ADAPTER_TYPE_OBJECT_MANAGER_CLIENT, bluezAdapterObjectManagerClientClass))
#define BLUEZ_ADAPTER_IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_ADAPTER_TYPE_OBJECT_MANAGER_CLIENT))
#define BLUEZ_ADAPTER_IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), BLUEZ_ADAPTER_TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _bluezAdapterObjectManagerClient bluezAdapterObjectManagerClient;
typedef struct _bluezAdapterObjectManagerClientClass bluezAdapterObjectManagerClientClass;
typedef struct _bluezAdapterObjectManagerClientPrivate bluezAdapterObjectManagerClientPrivate;

struct _bluezAdapterObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  bluezAdapterObjectManagerClientPrivate *priv;
};

struct _bluezAdapterObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (bluezAdapterObjectManagerClient, g_object_unref)
#endif

GType bluez_adapter_object_manager_client_get_type (void) G_GNUC_CONST;

GType bluez_adapter_object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void bluez_adapter_object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *bluez_adapter_object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *bluez_adapter_object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void bluez_adapter_object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *bluez_adapter_object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *bluez_adapter_object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __BLUEZADAPTERITF_H__ */
