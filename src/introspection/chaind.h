
static char const* const _introspection_chaind_xml = 
"<!DOCTYPE node PUBLIC \"-//freedesktop//DTD D-BUS Object Introspection 1.0//EN\" \"http://www.freedesktop.org/standards/dbus/1.0/introspect.dtd\">\n"
"<node name=\"/org/sarcharsoftware/chaind\">\n"
"    <interface name=\"org.freedesktop.DBus.Introspectable\">\n"
"        <method name=\"Introspect\">\n"
"            <arg name=\"data\" direction=\"out\" type=\"s\" />\n"
"        </method>\n"
"    </interface>\n"
"    <interface name=\"org.freedesktop.DBus.Properties\">\n"
"        <method name=\"Get\">\n"
"            <arg direction=\"in\" type=\"s\" />\n"
"            <arg direction=\"in\" type=\"s\" />\n"
"            <arg direction=\"out\" type=\"v\" />\n"
"        </method>\n"
"        <method name=\"Set\">\n"
"            <arg direction=\"in\" type=\"s\" />\n"
"            <arg direction=\"in\" type=\"s\" />\n"
"            <arg direction=\"in\" type=\"v\" />\n"
"        </method>\n"
"        <method name=\"GetAll\">\n"
"            <arg direction=\"in\" type=\"s\" />\n"
"            <arg direction=\"out\" type=\"a{sv}\" />\n"
"        </method>\n"
"        <signal name=\"PropertiesChanged\">\n"
"            <arg type=\"s\" />\n"
"            <arg type=\"a{sv}\" />\n"
"            <arg type=\"as\" />\n"
"        </signal>\n"
"    </interface>\n"
"    <interface name=\"org.sarcharsoftware.chaind\">\n"
"        <method name=\"GetBlock\">\n"
"            <arg direction=\"in\" type=\"s\" />\n"
"            <arg direction=\"out\" type=\"o\" />\n"
"        </method>\n"
"        <method name=\"GetBestBlock\">\n"
"            <arg direction=\"out\" type=\"o\" />\n"
"            <arg direction=\"out\" type=\"i\" />\n"
"        </method>\n"
"        <method name=\"GetTransaction\" />\n"
"        <signal name=\"BlockConnected\">\n"
"            <arg type=\"o\" />\n"
"            <arg type=\"s\" />\n"
"            <arg type=\"i\" />\n"
"            <arg type=\"i\" />\n"
"        </signal>\n"
"    </interface>\n"
"</node>\n"
;
