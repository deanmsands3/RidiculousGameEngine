#ifndef LOGGER_H__
#define LOGGER_H__

/*
 * This code was borrowed from
 * Publisher: DrDobb's Journal
 * Author: Petru Marginean
 * Article: Logging In C++
 * Ref: http://www.drdobbs.com/cpp/logging-in-c/201804215
 * */

#include <sstream>
#include <string>
#include <cstdio>
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#else
	#include <sys/time.h>
#endif // _WIN32

inline std::string NowTime();

enum TLogLevel {logERROR, logWARNING, logINFO, logDEBUG, logDEBUG1, logDEBUG2, logDEBUG3, logDEBUG4};

template <typename T>
class Logger
{
public:
	Logger();
	virtual ~Logger();
	std::ostringstream& Get(TLogLevel level = logINFO);
public:
	static TLogLevel& ReportingLevel();
	static std::string ToString(TLogLevel level);
	static TLogLevel FromString(const std::string& level);
protected:
	std::ostringstream os;
private:
	Logger(const Logger&);
	Logger& operator =(const Logger&);
};

template <typename T>
Logger<T>::Logger()
{
}

template <typename T>
std::ostringstream& Logger<T>::Get(TLogLevel level)
{
	os << "- " << NowTime();
	os << " " << ToString(level) << ": ";
	os << std::string(level > logDEBUG ? level - logDEBUG : 0, '\t');
	return os;
}

template <typename T>
Logger<T>::~Logger()
{
	os << std::endl;
	T::Output(os.str());
}

template <typename T>
TLogLevel& Logger<T>::ReportingLevel()
{
	static TLogLevel reportingLevel = logDEBUG4;
	return reportingLevel;
}

template <typename T>
std::string Logger<T>::ToString(TLogLevel level)
{
	static const char* const buffer[] = {"ERROR", "WARNING", "INFO", "DEBUG", "DEBUG1", "DEBUG2", "DEBUG3", "DEBUG4"};
	return buffer[level];
}

template <typename T>
TLogLevel Logger<T>::FromString(const std::string& level)
{
	if (level == "DEBUG4")
		return logDEBUG4;
	if (level == "DEBUG3")
		return logDEBUG3;
	if (level == "DEBUG2")
		return logDEBUG2;
	if (level == "DEBUG1")
		return logDEBUG1;
	if (level == "DEBUG")
		return logDEBUG;
	if (level == "INFO")
		return logINFO;
	if (level == "WARNING")
		return logWARNING;
	if (level == "ERROR")
		return logERROR;
	Logger<T>().Get(logWARNING) << "Unknown logging level '" << level << "'. Using INFO level as default.";
	return logINFO;
}

class Output2FILE
{
public:
	static FILE*& Stream();
	static void Output(const std::string& msg);
};

inline FILE*& Output2FILE::Stream()
{
	static FILE* pStream = stderr;
	return pStream;
}

inline void Output2FILE::Output(const std::string& msg)
{
	FILE* pStream = Stream();
	if (!pStream)
		return;
	fprintf(pStream, "%s", msg.c_str());
	fflush(pStream);
}

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#   if defined (BUILDING_FILELOG_DLL)
#       define FILELOG_DECLSPEC   __declspec (dllexport)
#   elif defined (USING_FILELOG_DLL)
#       define FILELOG_DECLSPEC   __declspec (dllimport)
#   else
#       define FILELOG_DECLSPEC
#   endif // BUILDING_DBSIMPLE_DLL
#else
#   define FILELOG_DECLSPEC
#endif // _WIN32

class FILELOG_DECLSPEC FILELog : public Logger<Output2FILE> {};
//typedef Log<Output2FILE> FILELog;

#ifndef FILELOG_MAX_LEVEL
#define FILELOG_MAX_LEVEL logDEBUG4
#endif

#define FILE_LOG(level) \
	if (level > FILELOG_MAX_LEVEL) ;\
	else if (level > FILELog::ReportingLevel() || !Output2FILE::Stream()) ; \
	else FILELog().Get(level)

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)

#ifndef _MFC_VER
#include <windows.h>
#endif

inline std::string NowTime()
{
	const int MAX_LEN = 200;
	char buffer[MAX_LEN];
	if (GetTimeFormatA(LOCALE_USER_DEFAULT, 0, 0,
			"HH':'mm':'ss", buffer, MAX_LEN) == 0)
		return "Error in NowTime()";

	char result[100] = {0};
	static DWORD first = GetTickCount();
	snprintf(result, 100, "%s.%03ld", buffer, (long)(GetTickCount() - first) % 1000);
	return result;
}

#else

#include <ctime>

inline std::string NowTime()
{
	char buffer[11];
	time_t t;
	time(&t);
	tm r = {0};
	strftime(buffer, sizeof(buffer), "%X", localtime_r(&t, &r));
	struct timeval tv;
	gettimeofday(&tv, 0);
	char result[100] = {0};
	std::snprintf(result, 100, "%s.%03ld", buffer, (long)tv.tv_usec / 1000);
	return result;
}

#endif //WIN32

#endif //LOGGER_H__
