require "json"

package = JSON.parse(File.read(File.join(__dir__, "package.json")))

Pod::Spec.new do |s|
  s.name         = "ImageCompressor"
  s.version      = package["version"]
  s.summary      = package["description"]
  s.homepage     = package["homepage"]
  s.license      = package["license"]
  s.authors      = package["author"]

  s.platforms    = { :ios => min_ios_version_supported, :visionos => 1.0 }
  s.source       = { :git => "https://github.com/mrousavy/nitro.git", :tag => "#{s.version}" }

  s.source_files = [
    # Implementation (Swift)
    "ios/**/*.{swift}",
    # Autolinking/Registration (Objective-C++)
    "ios/**/*.{m,mm}",
    # Implementation (C++ objects)
    "cpp/**/*.{hpp,cpp}"
#    "ios/opencv2.xcframework/**/*.{h,hpp}"
  ]
  
  s.dependency "OpenCV"
#  s.vendored_frameworks = "ios/opencv2.xcframework"

  load 'nitrogen/generated/ios/ImageCompressor+autolinking.rb'
  add_nitrogen_files(s)

  install_modules_dependencies(s)
end
