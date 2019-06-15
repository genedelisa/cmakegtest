# CMake C++17 project with google test

[![GitHub last commit](https://img.shields.io/github/last-commit/genedelisa/cmakegtest.svg)](https://github.com/genedelisa/cmakegtest/commits/master)

[![GitHub release](https://img.shields.io/github/release/genedelisa/cmakegtest.svg)](https://github.com/genedelisa/cmakegtest/releases/)
[![GitHub release date](https://img.shields.io/github/release-date/genedelisa/cmakegtest.svg)](https://github.com/genedelisa/cmakegtest/releases)

[![C++17](https://img.shields.io/badge/c++17-compatible-4BC51D.svg?style=flat")](https://www.iso.org/standard/68564.html)
[![Platforms macOS](https://img.shields.io/badge/Platforms-OS%20X-lightgray.svg?style=flat)](https://swift.org/)
[![license](https://img.shields.io/github/license/mashape/apistatus.svg)](https://en.wikipedia.org/wiki/MIT_License)

[![Sponsors](https://img.shields.io/badge/Sponsors-Rockhopper%20Technologies-orange.svg?style=flat)](http://www.rockhoppertech.com/)
[![Twitter @GeneDeLisaDev](https://img.shields.io/twitter/follow/GeneDeLisaDev.svg?style=social)](https://twitter.com/GeneDeLisaDev)
![GitHub followers](https://img.shields.io/github/followers/genedelisa.svg?label=Follow&style=social)

## What's this?

This is a C++17 project configured via cmake that uses Google test to test a simple C++ class.

Google test shold be added as a git submodule. Here are the incantations to do that.
There is a shell script named setup.sh that will do this for you.

```shell
git init .
git submodule add  https://github.com/google/googletest lib/googletest
git submodule update --init --recursive
```

The Account class is crammed into a library. The src CMakeLists.txt shows how. The test directory's CMakeLists.txt links to it. There is also just a regular garden variety main that is compiled into bin/account.

The tests use a test fixture.

## Build and Test

Run cmake from the build directory. Then run make to compile.
To run the tests, run make test, or run bin/tests.
You can see the make targets created by cmake by typine make help.

```shell
    $ cd build
    $ cmake ..
    $ make
    $ make test
```

## Visual Studio Code

If you're using Visual Studio Code, CMake Tools is a good extension to use. There are multiple cmake tasks defined. "cmake: run tests" will build, make, and run the tests.

There is an extensions.json file in the .vscode directory listing the extensions I used.

## Blog post for this example

[Blog post coming coon](http://www.rockhoppertech.com/blog/)

### Buy my kitty Giacomo some cat food

If you find this useful, my kitty likes snacks.

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donate_SM.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=F5KE9Z29MH8YQ&bnP-DonationsBF:btn_donate_SM.gif:NonHosted)

<img src="http://www.rockhoppertech.com/blog/wp-content/uploads/2016/07/momocoding-1024.png" alt="Giacomo Kitty" width="400" height="300">

## Licensing

[MIT](https://en.wikipedia.org/wiki/MIT_License)

Please read the [LICENSE](LICENSE) for details.

## Credits

* [Gene De Lisa's development blog](http://rockhoppertech.com/blog/)
* [Gene De Lisa's music blog](http://genedelisa.com/)
* Twitter: [@GeneDeLisaDev](http://twitter.com/genedelisadev)
