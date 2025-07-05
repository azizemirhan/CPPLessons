Package: fmt:arm64-osx@11.0.2#1

**Host Environment**

- Host: arm64-osx
- Compiler: Clang 20.1.7
-    vcpkg-tool version: 2025-06-20-ef7c0d541124bbdd334a03467e7edb6c3364d199
    vcpkg-scripts version: 9e8416f15d 2025-07-04 (30 hours ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
-- Using cached fmtlib-fmt-11.0.2.tar.gz
-- Cleaning sources at /Users/azizemirhanozdemir/vcpkg/buildtrees/fmt/src/11.0.2-c30c0a133f.clean. Use --editable to skip cleaning for the packages you specify.
-- Extracting source /Users/azizemirhanozdemir/vcpkg/downloads/fmtlib-fmt-11.0.2.tar.gz
-- Applying patch fix-write-batch.patch
-- Applying patch fix-pass-utf-8-only-if-the-compiler-is-MSVC-at-build.patch
-- Using source at /Users/azizemirhanozdemir/vcpkg/buildtrees/fmt/src/11.0.2-c30c0a133f.clean
-- Found external ninja('1.13.0').
-- Configuring arm64-osx
-- Building arm64-osx-dbg
-- Building arm64-osx-rel
-- Fixing pkgconfig file: /Users/azizemirhanozdemir/vcpkg/packages/fmt_arm64-osx/lib/pkgconfig/fmt.pc
CMake Error at scripts/cmake/vcpkg_find_acquire_program.cmake:166 (message):
  Could not find pkg-config.  Please install it via your package manager:

      brew install pkg-config
Call Stack (most recent call first):
  scripts/cmake/vcpkg_fixup_pkgconfig.cmake:193 (vcpkg_find_acquire_program)
  ports/fmt/portfile.cmake:22 (vcpkg_fixup_pkgconfig)
  scripts/ports.cmake:206 (include)



```

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "mycppproject",
  "version-string": "0.1.0",
  "dependencies": [
    "fmt",
    "spdlog"
  ]
}

```
</details>
