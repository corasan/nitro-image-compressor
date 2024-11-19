///
/// ImageAsset.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif



#include <string>

namespace margelo::nitro::imagecompressor {

  /**
   * A struct which can be represented as a JavaScript object (ImageAsset).
   */
  struct ImageAsset {
  public:
    std::string uri     SWIFT_PRIVATE;
    double width     SWIFT_PRIVATE;
    double height     SWIFT_PRIVATE;
    double fileSize     SWIFT_PRIVATE;

  public:
    explicit ImageAsset(std::string uri, double width, double height, double fileSize): uri(uri), width(width), height(height), fileSize(fileSize) {}
  };

} // namespace margelo::nitro::imagecompressor

namespace margelo::nitro {

  using namespace margelo::nitro::imagecompressor;

  // C++ ImageAsset <> JS ImageAsset (object)
  template <>
  struct JSIConverter<ImageAsset> {
    static inline ImageAsset fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      jsi::Object obj = arg.asObject(runtime);
      return ImageAsset(
        JSIConverter<std::string>::fromJSI(runtime, obj.getProperty(runtime, "uri")),
        JSIConverter<double>::fromJSI(runtime, obj.getProperty(runtime, "width")),
        JSIConverter<double>::fromJSI(runtime, obj.getProperty(runtime, "height")),
        JSIConverter<double>::fromJSI(runtime, obj.getProperty(runtime, "fileSize"))
      );
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, const ImageAsset& arg) {
      jsi::Object obj(runtime);
      obj.setProperty(runtime, "uri", JSIConverter<std::string>::toJSI(runtime, arg.uri));
      obj.setProperty(runtime, "width", JSIConverter<double>::toJSI(runtime, arg.width));
      obj.setProperty(runtime, "height", JSIConverter<double>::toJSI(runtime, arg.height));
      obj.setProperty(runtime, "fileSize", JSIConverter<double>::toJSI(runtime, arg.fileSize));
      return obj;
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isObject()) {
        return false;
      }
      jsi::Object obj = value.getObject(runtime);
      if (!JSIConverter<std::string>::canConvert(runtime, obj.getProperty(runtime, "uri"))) return false;
      if (!JSIConverter<double>::canConvert(runtime, obj.getProperty(runtime, "width"))) return false;
      if (!JSIConverter<double>::canConvert(runtime, obj.getProperty(runtime, "height"))) return false;
      if (!JSIConverter<double>::canConvert(runtime, obj.getProperty(runtime, "fileSize"))) return false;
      return true;
    }
  };

} // namespace margelo::nitro
