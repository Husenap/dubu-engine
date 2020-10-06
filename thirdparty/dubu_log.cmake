message("-- External Project: dubu_log")
include(FetchContent)

FetchContent_Declare(
    dubu_log
    GIT_REPOSITORY  https://github.com/Husenap/dubu-log.git
    GIT_TAG         v1.0
)

set(dubu_log_BUILD_TESTS OFF)
set(dubu_log_FOLDER "thirdparty/dubu_log")

FetchContent_MakeAvailable(dubu_log)