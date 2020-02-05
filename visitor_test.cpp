#include <gtest/gtest.h>
#include <Logger/Logger.h>
#include <visitor/Scenario.h>
#include <visitor/NightMode.h>
#include <visitor/DayMode.h>
#include <string>

using namespace visitor;

TEST(Visitor,SetNightMode)
{
  Logger log;
  Scenario sc(&log);
  NightMode mode;
  sc.Execute(&mode);

  std::string actual = log.GetLog();
  ASSERT_STREQ(actual.c_str(),"Relay$On:RGB$SetBrightness$10:RGB$SetColor$0:");
}

TEST(Visitor,SetDayMode)
{
	Logger log;
	Scenario sc(&log);
	DayMode mode;
	sc.Execute(&mode);

	std::string actual = log.GetLog();

	ASSERT_STREQ(actual.c_str(),"Relay$Off:RGB$SetColor$255:RGB$SetBrightness$100:");
}
