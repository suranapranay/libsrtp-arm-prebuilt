
APP_ABI := arm64-v8a
APP_PLATFORM := android-26

APP_ALLOW_MISSING_DEPS := true

APP_STL := c++_static
NDK_TOOLCHAIN_VERSION=4.9
APP_CPPFLAGS := -Wall  -fpermissive -std=c++14 -fopenmp

APP_OPTIM := release
