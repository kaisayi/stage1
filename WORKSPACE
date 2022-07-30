workspace(name="bazel_stage1")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

git_repository(
    name = "googletest",
    remote = "https://github.com/google/googletest.git",
    tag = "release-1.11.0",
)

git_repository(
    name = "glog",
    remote = "https://github.com/google/glog.git",
    tag = "v0.5.0",
)

git_repository(
    name = "com_google_absl",
    remote = "https://github.com/abseil/abseil-cpp.git",
    tag = "20211102.0",
)

git_repository(
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags.git",
    tag = "v2.2.2",
)


http_archive(
    name = "com_google_protobuf",
    strip_prefix = "protobuf-3.17.1",
    url = "https://github.com/protocolbuffers/protobuf/archive/refs/tags/v3.17.1.tar.gz",
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

protobuf_deps()

## https://github.com/Tencent/rapidjson/
http_archive(
  name = "com_github_tencent_rapidjson",
  strip_prefix = "rapidjson-1.1.0",
  url = "https://github.com/Tencent/rapidjson/archive/v1.1.0.tar.gz",
  build_file = "rapidjson.BUILD",
)
