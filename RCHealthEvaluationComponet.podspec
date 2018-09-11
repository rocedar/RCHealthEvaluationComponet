Pod::Spec.new do |s|
  s.name             = 'RCHealthEvaluationComponet'
  s.version          = '0.1.6'
  s.summary          = 'RCHealthEvaluationComponet.'
  
  s.homepage         = 'https://github.com/rocedar/RCHealthEvaluationComponet'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'wutengwei' => 'wutengwei@rocedar.com' }
  s.source           = { :git => 'https://github.com/rocedar/RCHealthEvaluationComponet.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'
  s.resource = 'RCHealthEvaluationComponet/Classes/RCHealthEvaluationComponet.bundle'
  s.ios.vendored_frameworks = 'RCHealthEvaluationComponet/Classes/RCHealthEvaluationComponet.framework'
  
  s.dependency 'RCBaseComponent'

  s.frameworks = 'UIKit', 'MobileCoreServices','SystemConfiguration'
end
