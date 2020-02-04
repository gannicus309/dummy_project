#include "client.h"
#include "device_mock.h"

TEST(ClientTest, UsemockerSingleton) {
  auto& device_mock = singleton::DeviceMock::instance();
  EXPECT_CALL(device_mock, On()).Times(2);
  EXPECT_CALL(device_mock, Off());
  client();
}

int main(int argc, char** argv) {
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
