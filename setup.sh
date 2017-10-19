export TOOLCHAIN=/home/psurana/aa/bin/
#export CROSS_SYSROOT=/home/psurana/work/snitch/ros-pkg/core/audio/srtp/toolchain/sysroot
export CROSS_SYSROOT=/home/psurana/aa/sysroot
export CROSS_COMPILE=aarch64-linux-android-
export SYSROOT=/home/psurana/aa/sysroot
export CC="${TOOLCHAIN}${CROSS_COMPILE}gcc" 
export CXX="${TOOLCHAIN}${CROSS_COMPILE}gxx"
#export LDFLAGS=-L/home/psurana/aa/sysroot/usr/lib/
export PATH=/home/psurana/aa/bin:$PATH
#export CPPFLAGS=-I/home/psurana/aa/sysroot/usr/include
export CFLAGS= ${CFLAGS} '-D__ANDROID_API__=26'
#./configure  --host=aarch64-linux-android CC=aarch64-linux-android-gcc
