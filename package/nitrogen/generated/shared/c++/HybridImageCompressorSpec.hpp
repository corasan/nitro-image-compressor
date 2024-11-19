///
/// HybridImageCompressorSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `ImageAsset` to properly resolve imports.
namespace margelo::nitro::imagecompressor { struct ImageAsset; }
// Forward declaration of `CompressionOptions` to properly resolve imports.
namespace margelo::nitro::imagecompressor { struct CompressionOptions; }

#include <string>
#include "ImageAsset.hpp"
#include <optional>
#include "CompressionOptions.hpp"

namespace margelo::nitro::imagecompressor {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `ImageCompressor`
   * Inherit this class to create instances of `HybridImageCompressorSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridImageCompressor: public HybridImageCompressorSpec {
   * public:
   *   HybridImageCompressor(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridImageCompressorSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridImageCompressorSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridImageCompressorSpec() { }

    public:
      // Properties
      

    public:
      // Methods
      virtual std::string compress(const ImageAsset& image, const std::optional<CompressionOptions>& options) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "ImageCompressor";
  };

} // namespace margelo::nitro::imagecompressor
