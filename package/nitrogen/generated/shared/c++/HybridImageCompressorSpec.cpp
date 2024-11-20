///
/// HybridImageCompressorSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridImageCompressorSpec.hpp"

namespace margelo::nitro::imagecompressor {

  void HybridImageCompressorSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridMethod("compress", &HybridImageCompressorSpec::compress);
      prototype.registerHybridMethod("saveImage", &HybridImageCompressorSpec::saveImage);
    });
  }

} // namespace margelo::nitro::imagecompressor
