#ifndef GLOBALS_H
#define GLOBALS_H

#include <boost/property_tree/ini_parser.hpp>
#include <cx2_prg_logs/applog.h>
#include <mutex>
#include <list>

namespace UANLZ { namespace LOG2JSON {

class Globals
{
public:
    Globals();

    static CX2::Application::Logs::AppLog *getAppLog();
    static void setAppLog(CX2::Application::Logs::AppLog *value);

    static std::mutex * getDatabaseMutex();

    static boost::property_tree::ptree * getConfig_main();


private:
    static std::mutex mDatabase,mDirs;
    static boost::property_tree::ptree config_main;
    static CX2::Application::Logs::AppLog * applog;

};


}}


#endif // GLOBALS_H
