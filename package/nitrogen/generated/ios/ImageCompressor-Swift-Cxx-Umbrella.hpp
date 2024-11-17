///
/// ImageCompressor-Swift-Cxx-Umbrella.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types


// Include C++ defined types


// C++ helpers for Swift
#include "ImageCompressor-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/PromiseHolder.hpp>

// Forward declarations of Swift defined types


// Include Swift defined types
#if __has_include("ImageCompressor-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "ImageCompressor".
#include "ImageCompressor-Swift.h"
#else
#error ImageCompressor's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "ImageCompressor", and try building the app first.
#endif
