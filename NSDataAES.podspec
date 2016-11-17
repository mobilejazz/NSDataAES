
Pod::Spec.new do |s|
  s.name             = 'NSDataAES'
  s.version          = '0.2.1'
  s.summary          = 'Simple category to encrypt NSData using AED'
  s.homepage         = 'https://github.com/mobilejazz/NSDataAES'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Paolo Tagliani' => 'paolo@mobilejazz.com' }
  s.source           = { :git => 'https://github.com/mobilejazz/NSDataAES.git', :tag => s.version.to_s }
  s.ios.deployment_target = '7.0'
  s.source_files 	 = 'NSDataAES/Classes/**/*'
end
